#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)23;
unsigned long long int var_5 = 4765304209449373475ULL;
signed char var_6 = (signed char)32;
signed char var_7 = (signed char)-121;
short var_10 = (short)21534;
unsigned char var_12 = (unsigned char)231;
int zero = 0;
int var_14 = -2123134948;
int var_15 = 1037443684;
long long int var_16 = -7888588155676837300LL;
short var_17 = (short)-23431;
short var_18 = (short)-23876;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
