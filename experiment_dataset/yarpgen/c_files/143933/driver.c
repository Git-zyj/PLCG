#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_7 = (signed char)-71;
unsigned short var_8 = (unsigned short)52833;
unsigned short var_10 = (unsigned short)55043;
long long int var_11 = 9104206404016258683LL;
int var_14 = 1932289463;
int zero = 0;
unsigned long long int var_17 = 10880373452362174212ULL;
short var_18 = (short)-26519;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
