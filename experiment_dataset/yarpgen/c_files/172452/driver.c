#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)11;
unsigned char var_6 = (unsigned char)17;
unsigned int var_12 = 3260913493U;
short var_15 = (short)-20362;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)145;
int var_18 = -1874415602;
unsigned short var_19 = (unsigned short)40631;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
