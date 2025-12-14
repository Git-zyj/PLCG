#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)181;
unsigned short var_8 = (unsigned short)9292;
unsigned long long int var_14 = 9214733217729557638ULL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-29512;
int zero = 0;
unsigned short var_20 = (unsigned short)22410;
unsigned char var_21 = (unsigned char)205;
unsigned long long int var_22 = 4661428896270722495ULL;
void init() {
}

void checksum() {
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
