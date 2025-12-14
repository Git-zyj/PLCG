#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1543318695;
int var_5 = 179078420;
int var_6 = 1089621304;
short var_7 = (short)18692;
short var_8 = (short)-1456;
int var_9 = -780281366;
int zero = 0;
int var_10 = -2125840177;
int var_11 = 1366266364;
short var_12 = (short)-16681;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
