#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)61;
_Bool var_4 = (_Bool)0;
short var_6 = (short)-15661;
unsigned int var_8 = 2618212077U;
int var_9 = -310346299;
unsigned long long int var_10 = 4104964092523506487ULL;
signed char var_11 = (signed char)25;
int zero = 0;
short var_14 = (short)-1730;
unsigned long long int var_15 = 13668006064059644224ULL;
short var_16 = (short)30179;
unsigned char var_17 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
