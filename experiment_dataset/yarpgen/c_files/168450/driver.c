#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9153339373555574037ULL;
unsigned short var_2 = (unsigned short)26239;
unsigned char var_4 = (unsigned char)142;
unsigned char var_7 = (unsigned char)178;
signed char var_8 = (signed char)13;
int zero = 0;
signed char var_10 = (signed char)39;
signed char var_11 = (signed char)-122;
short var_12 = (short)13192;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
