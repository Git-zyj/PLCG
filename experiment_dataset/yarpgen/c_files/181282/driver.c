#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned short var_9 = (unsigned short)47119;
unsigned long long int var_10 = 7500012693103330588ULL;
long long int var_11 = 3693549958133766671LL;
int zero = 0;
unsigned char var_12 = (unsigned char)72;
unsigned short var_13 = (unsigned short)4284;
unsigned char var_14 = (unsigned char)56;
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
