#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)165;
long long int var_7 = -5114370199353145290LL;
signed char var_10 = (signed char)-49;
unsigned short var_18 = (unsigned short)8302;
int zero = 0;
int var_20 = 445503582;
unsigned int var_21 = 1558050152U;
signed char var_22 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
