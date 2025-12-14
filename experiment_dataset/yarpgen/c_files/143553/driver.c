#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 599676128;
short var_5 = (short)3283;
signed char var_6 = (signed char)-1;
long long int var_16 = 2093681879724275414LL;
int zero = 0;
unsigned char var_17 = (unsigned char)121;
int var_18 = 2031274563;
short var_19 = (short)12892;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
