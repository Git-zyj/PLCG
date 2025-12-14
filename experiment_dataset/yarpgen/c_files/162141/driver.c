#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)61;
unsigned int var_2 = 3213633742U;
long long int var_3 = 8812363184429930343LL;
short var_6 = (short)24808;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 2257776533U;
signed char var_15 = (signed char)-29;
int zero = 0;
unsigned short var_16 = (unsigned short)44228;
signed char var_17 = (signed char)94;
unsigned short var_18 = (unsigned short)19947;
unsigned char var_19 = (unsigned char)139;
unsigned long long int var_20 = 14389459431399739771ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
