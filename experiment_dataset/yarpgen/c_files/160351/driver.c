#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)59208;
unsigned short var_5 = (unsigned short)63045;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-93;
int zero = 0;
unsigned char var_14 = (unsigned char)38;
unsigned int var_15 = 1622641102U;
void init() {
}

void checksum() {
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
