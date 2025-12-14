#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3529;
unsigned char var_3 = (unsigned char)173;
signed char var_4 = (signed char)89;
int var_5 = -1659040369;
unsigned int var_9 = 1967973967U;
int zero = 0;
unsigned int var_10 = 1818904290U;
unsigned long long int var_11 = 9433786583866062409ULL;
unsigned short var_12 = (unsigned short)46731;
signed char var_13 = (signed char)-13;
signed char var_14 = (signed char)103;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
