#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)38;
unsigned short var_3 = (unsigned short)58747;
signed char var_4 = (signed char)-78;
unsigned char var_8 = (unsigned char)108;
unsigned int var_10 = 3323012727U;
long long int var_12 = -5684893534012264813LL;
unsigned int var_14 = 965656815U;
unsigned char var_18 = (unsigned char)162;
long long int var_19 = -1123016465304788615LL;
int zero = 0;
long long int var_20 = 359132606546031195LL;
long long int var_21 = 4580689684537270500LL;
unsigned char var_22 = (unsigned char)147;
unsigned short var_23 = (unsigned short)971;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
