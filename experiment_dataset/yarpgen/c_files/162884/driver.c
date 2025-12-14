#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7779338825612985010LL;
unsigned long long int var_3 = 15997232120013915770ULL;
signed char var_8 = (signed char)-83;
int zero = 0;
unsigned int var_10 = 3018056983U;
unsigned char var_11 = (unsigned char)133;
signed char var_12 = (signed char)-35;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
