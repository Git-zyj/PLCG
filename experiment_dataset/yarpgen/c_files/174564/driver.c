#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9657329330063096940ULL;
signed char var_1 = (signed char)34;
unsigned char var_3 = (unsigned char)135;
unsigned short var_7 = (unsigned short)28386;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_13 = (short)-16985;
long long int var_14 = 7513636617697844713LL;
void init() {
}

void checksum() {
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
