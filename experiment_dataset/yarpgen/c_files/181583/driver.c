#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1025684346U;
signed char var_1 = (signed char)14;
short var_2 = (short)-27422;
int var_3 = 1194826674;
int var_5 = -1674199950;
int var_6 = -1344714483;
int var_7 = -591204556;
unsigned char var_8 = (unsigned char)60;
unsigned long long int var_9 = 5699752094956325277ULL;
int zero = 0;
signed char var_10 = (signed char)-58;
unsigned char var_11 = (unsigned char)68;
unsigned int var_12 = 713506446U;
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
