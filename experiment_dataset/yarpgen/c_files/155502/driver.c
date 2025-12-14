#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17782178414322346474ULL;
unsigned long long int var_5 = 6583035613300153506ULL;
int var_7 = 700026435;
unsigned int var_8 = 2972800694U;
int zero = 0;
unsigned short var_13 = (unsigned short)11034;
unsigned int var_14 = 3814059109U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
