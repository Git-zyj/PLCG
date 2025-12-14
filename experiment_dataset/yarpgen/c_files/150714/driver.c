#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13880592243661995023ULL;
short var_2 = (short)-29333;
long long int var_4 = 4903535537970915322LL;
long long int var_6 = -10059808530468360LL;
unsigned short var_7 = (unsigned short)46112;
unsigned int var_8 = 981148792U;
short var_9 = (short)29281;
unsigned long long int var_10 = 16781254847777332503ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)61;
long long int var_13 = 5606974151385900707LL;
int var_14 = -57140874;
unsigned short var_15 = (unsigned short)27817;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
