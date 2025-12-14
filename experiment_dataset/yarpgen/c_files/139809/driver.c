#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57558;
unsigned short var_2 = (unsigned short)49468;
unsigned short var_3 = (unsigned short)30291;
unsigned short var_5 = (unsigned short)41895;
int var_6 = 238603649;
unsigned int var_7 = 1853126343U;
unsigned int var_8 = 416302397U;
int zero = 0;
int var_12 = 1275293954;
signed char var_13 = (signed char)-104;
void init() {
}

void checksum() {
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
