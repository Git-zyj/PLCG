#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -6884769821797539108LL;
unsigned short var_11 = (unsigned short)61079;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_15 = 4619461029617659581LL;
unsigned short var_16 = (unsigned short)6683;
signed char var_17 = (signed char)-111;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
