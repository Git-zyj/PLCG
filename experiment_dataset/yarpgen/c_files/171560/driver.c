#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2507593427U;
unsigned int var_6 = 3532973936U;
signed char var_15 = (signed char)79;
int var_17 = -1958837786;
int var_18 = -828938919;
unsigned short var_19 = (unsigned short)62469;
int zero = 0;
unsigned short var_20 = (unsigned short)61481;
unsigned int var_21 = 1251694920U;
unsigned short var_22 = (unsigned short)22043;
int var_23 = 955767845;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
