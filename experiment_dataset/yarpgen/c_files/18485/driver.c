#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)235;
long long int var_1 = -2088547158128862532LL;
unsigned short var_2 = (unsigned short)1689;
int var_6 = -1260607343;
unsigned int var_8 = 3195076551U;
_Bool var_9 = (_Bool)0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)25406;
int zero = 0;
unsigned short var_17 = (unsigned short)47272;
unsigned long long int var_18 = 12214697890554027656ULL;
unsigned char var_19 = (unsigned char)42;
unsigned long long int var_20 = 15643478249634869800ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
