#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52646;
unsigned short var_4 = (unsigned short)23523;
unsigned long long int var_11 = 12329101745199861381ULL;
int zero = 0;
signed char var_12 = (signed char)-43;
unsigned long long int var_13 = 7088367897516132586ULL;
unsigned int var_14 = 911850971U;
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
