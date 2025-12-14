#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 11301978;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 276745556U;
signed char var_14 = (signed char)-4;
signed char var_15 = (signed char)6;
int var_16 = -335206189;
int zero = 0;
unsigned char var_18 = (unsigned char)5;
unsigned long long int var_19 = 12472888753993742676ULL;
int var_20 = -365251749;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
