#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)152;
int var_5 = -821501412;
unsigned char var_9 = (unsigned char)150;
int zero = 0;
unsigned int var_13 = 1095883979U;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-24;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
