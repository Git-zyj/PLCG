#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6517531564118801657LL;
int var_3 = -1622249794;
unsigned int var_4 = 2569650458U;
unsigned short var_8 = (unsigned short)11592;
unsigned short var_10 = (unsigned short)34376;
unsigned int var_14 = 348751206U;
int zero = 0;
unsigned int var_17 = 2165148441U;
int var_18 = -1810345747;
int var_19 = -1608702770;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
