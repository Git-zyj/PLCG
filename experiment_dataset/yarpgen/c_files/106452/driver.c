#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8798306235944012952ULL;
unsigned short var_3 = (unsigned short)1687;
unsigned long long int var_5 = 13811069908536152472ULL;
unsigned int var_6 = 962510902U;
signed char var_8 = (signed char)-114;
int zero = 0;
signed char var_10 = (signed char)-44;
unsigned long long int var_11 = 17072255148653247841ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
