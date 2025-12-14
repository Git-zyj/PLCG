#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3721565178U;
unsigned long long int var_1 = 12822803780946213898ULL;
unsigned long long int var_7 = 2772455217612604898ULL;
unsigned int var_9 = 184283578U;
signed char var_11 = (signed char)31;
int zero = 0;
unsigned long long int var_12 = 9039800180051448822ULL;
unsigned long long int var_13 = 663407601774978739ULL;
unsigned short var_14 = (unsigned short)20164;
void init() {
}

void checksum() {
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
