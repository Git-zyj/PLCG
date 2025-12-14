#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3761216652U;
unsigned long long int var_4 = 899694090026893513ULL;
unsigned short var_5 = (unsigned short)40080;
signed char var_6 = (signed char)-26;
long long int var_10 = -3132246584782457102LL;
int var_13 = -276607456;
int zero = 0;
int var_14 = -1492560385;
long long int var_15 = -5311990670250699622LL;
signed char var_16 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
