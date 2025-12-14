#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1965978969;
unsigned short var_5 = (unsigned short)64002;
unsigned long long int var_8 = 6318982547873006670ULL;
unsigned short var_11 = (unsigned short)4988;
unsigned char var_12 = (unsigned char)211;
int zero = 0;
unsigned int var_13 = 174859614U;
long long int var_14 = -6962484226672265810LL;
unsigned short var_15 = (unsigned short)46154;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
