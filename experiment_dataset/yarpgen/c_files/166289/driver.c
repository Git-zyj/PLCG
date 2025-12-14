#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)28429;
signed char var_7 = (signed char)52;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 1315184451642810513ULL;
int zero = 0;
signed char var_19 = (signed char)-98;
int var_20 = -523596625;
short var_21 = (short)8677;
unsigned long long int var_22 = 16907984868473507459ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
