#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63964;
int var_2 = 676663937;
unsigned char var_4 = (unsigned char)50;
unsigned short var_7 = (unsigned short)55846;
short var_8 = (short)-5962;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)67;
long long int var_15 = -8371889426141000198LL;
int zero = 0;
unsigned int var_19 = 2961316173U;
short var_20 = (short)20985;
short var_21 = (short)-10886;
int var_22 = -2005307245;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
