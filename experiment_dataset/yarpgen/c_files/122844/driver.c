#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37743;
unsigned short var_2 = (unsigned short)50019;
signed char var_3 = (signed char)11;
int var_4 = -329302719;
int zero = 0;
signed char var_14 = (signed char)42;
unsigned int var_15 = 846846382U;
unsigned int var_16 = 205826955U;
unsigned int var_17 = 3948672309U;
unsigned char var_18 = (unsigned char)245;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
