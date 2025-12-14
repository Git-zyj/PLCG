#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1330494303;
unsigned int var_6 = 1115224953U;
int var_7 = 963470388;
int var_8 = 243948018;
short var_9 = (short)-20024;
unsigned long long int var_10 = 11020632034506363652ULL;
int zero = 0;
int var_11 = 539077081;
unsigned long long int var_12 = 3430843284748820357ULL;
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
