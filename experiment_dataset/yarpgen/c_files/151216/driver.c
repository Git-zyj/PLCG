#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 7700971;
short var_2 = (short)20766;
unsigned long long int var_3 = 708331298091096632ULL;
short var_5 = (short)-13799;
unsigned long long int var_7 = 1700586314757634098ULL;
unsigned long long int var_8 = 9313826424380512353ULL;
short var_10 = (short)-27010;
int zero = 0;
int var_11 = -2113689295;
short var_12 = (short)-27374;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
