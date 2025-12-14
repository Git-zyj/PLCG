#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7257082070460681369ULL;
short var_2 = (short)-23241;
unsigned short var_3 = (unsigned short)56517;
_Bool var_6 = (_Bool)1;
short var_10 = (short)-16501;
int zero = 0;
unsigned short var_20 = (unsigned short)34119;
long long int var_21 = 6369365770303814112LL;
signed char var_22 = (signed char)-95;
void init() {
}

void checksum() {
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
