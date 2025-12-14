#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1399631159;
short var_2 = (short)29522;
int var_3 = 386546893;
int var_4 = -2081623616;
int zero = 0;
short var_10 = (short)7758;
short var_11 = (short)-19675;
short var_12 = (short)-24273;
int var_13 = -236008465;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
