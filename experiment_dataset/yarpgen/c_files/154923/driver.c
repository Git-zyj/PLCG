#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12322;
unsigned long long int var_4 = 16514893419935147113ULL;
unsigned char var_8 = (unsigned char)75;
int zero = 0;
unsigned long long int var_11 = 14248298337001899327ULL;
unsigned long long int var_12 = 5511863430715268259ULL;
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
