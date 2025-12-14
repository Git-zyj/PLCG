#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23625;
short var_4 = (short)-19426;
_Bool var_6 = (_Bool)0;
short var_7 = (short)19994;
unsigned short var_8 = (unsigned short)45307;
unsigned short var_9 = (unsigned short)5612;
signed char var_10 = (signed char)-122;
short var_12 = (short)24689;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)15205;
unsigned long long int var_18 = 17105246925580398542ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
