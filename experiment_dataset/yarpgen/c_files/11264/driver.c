#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)132;
signed char var_9 = (signed char)124;
signed char var_10 = (signed char)-33;
signed char var_11 = (signed char)-118;
unsigned long long int var_13 = 4256071305420586267ULL;
unsigned long long int var_14 = 9780474630342530863ULL;
signed char var_18 = (signed char)73;
int zero = 0;
unsigned char var_20 = (unsigned char)99;
unsigned char var_21 = (unsigned char)43;
signed char var_22 = (signed char)124;
signed char var_23 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
