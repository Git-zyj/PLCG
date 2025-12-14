#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3646681249U;
unsigned long long int var_6 = 15599307241126209385ULL;
long long int var_12 = -6896942043490177756LL;
int zero = 0;
unsigned char var_15 = (unsigned char)0;
unsigned long long int var_16 = 6203029372777990447ULL;
unsigned short var_17 = (unsigned short)28675;
int var_18 = -512585598;
void init() {
}

void checksum() {
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
