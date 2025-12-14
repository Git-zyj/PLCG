#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14146692185345203599ULL;
signed char var_5 = (signed char)95;
signed char var_7 = (signed char)49;
signed char var_8 = (signed char)-53;
int zero = 0;
unsigned char var_11 = (unsigned char)59;
unsigned char var_12 = (unsigned char)54;
signed char var_13 = (signed char)20;
unsigned long long int var_14 = 1263721869972884539ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
