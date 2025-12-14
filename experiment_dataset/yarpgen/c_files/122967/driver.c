#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2622667192U;
unsigned long long int var_5 = 570254306303734562ULL;
signed char var_6 = (signed char)47;
int var_7 = 1644247198;
unsigned char var_8 = (unsigned char)237;
unsigned int var_9 = 1933701178U;
unsigned short var_13 = (unsigned short)26137;
int zero = 0;
unsigned int var_14 = 750656668U;
long long int var_15 = 7111904156831890746LL;
unsigned short var_16 = (unsigned short)55982;
void init() {
}

void checksum() {
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
