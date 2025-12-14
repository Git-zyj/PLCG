#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1411934672;
int var_3 = 1828909649;
int var_6 = -135652417;
int var_8 = 579654460;
int var_9 = 449073321;
int var_10 = -833705766;
int var_13 = -18428231;
int var_17 = 400510975;
int zero = 0;
int var_19 = -1313465127;
int var_20 = -1035146491;
int var_21 = -451885479;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
