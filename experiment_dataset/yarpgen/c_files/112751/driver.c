#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1376838199;
int var_7 = 337831191;
unsigned char var_8 = (unsigned char)222;
unsigned int var_13 = 2766005135U;
unsigned char var_15 = (unsigned char)43;
unsigned int var_17 = 1043215540U;
int zero = 0;
unsigned int var_18 = 1106849621U;
unsigned char var_19 = (unsigned char)227;
void init() {
}

void checksum() {
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
