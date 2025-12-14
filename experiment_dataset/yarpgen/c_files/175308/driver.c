#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16061771004158565978ULL;
unsigned char var_4 = (unsigned char)221;
unsigned char var_5 = (unsigned char)39;
unsigned char var_7 = (unsigned char)3;
short var_14 = (short)2414;
int zero = 0;
unsigned long long int var_20 = 2066540185446310207ULL;
short var_21 = (short)14258;
unsigned long long int var_22 = 14510889863748353215ULL;
int var_23 = -1478679628;
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
