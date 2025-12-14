#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
unsigned long long int var_3 = 7453164820246490952ULL;
unsigned short var_5 = (unsigned short)49761;
int var_6 = -468093520;
short var_9 = (short)-10777;
_Bool var_10 = (_Bool)0;
int var_11 = 361110858;
unsigned short var_13 = (unsigned short)18492;
int var_15 = -1315477576;
int zero = 0;
int var_19 = -6926207;
unsigned long long int var_20 = 12250902412411754145ULL;
void init() {
}

void checksum() {
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
