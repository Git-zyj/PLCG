#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6246624769299986433LL;
unsigned long long int var_2 = 7250511292706382678ULL;
short var_3 = (short)15019;
unsigned char var_5 = (unsigned char)17;
unsigned char var_6 = (unsigned char)71;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3540824689U;
int zero = 0;
long long int var_10 = 115933830766970600LL;
int var_11 = 1440373756;
unsigned int var_12 = 1059575148U;
unsigned short var_13 = (unsigned short)38887;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
