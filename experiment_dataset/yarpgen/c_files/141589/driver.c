#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2690343191U;
unsigned short var_3 = (unsigned short)8356;
unsigned char var_5 = (unsigned char)70;
int var_6 = 1706101288;
int var_7 = -1028110947;
unsigned short var_9 = (unsigned short)3141;
int var_11 = 1774817071;
signed char var_12 = (signed char)114;
int zero = 0;
unsigned char var_13 = (unsigned char)182;
unsigned long long int var_14 = 3895553553453724942ULL;
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
