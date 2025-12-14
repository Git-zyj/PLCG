#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)6897;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)24856;
long long int var_9 = 5714031085067649610LL;
int var_10 = 1339799964;
signed char var_13 = (signed char)-112;
int zero = 0;
signed char var_14 = (signed char)-68;
signed char var_15 = (signed char)-33;
unsigned short var_16 = (unsigned short)23041;
unsigned short var_17 = (unsigned short)44935;
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
