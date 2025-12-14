#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 6396122930662159099LL;
unsigned short var_10 = (unsigned short)62386;
unsigned int var_11 = 2418085119U;
_Bool var_13 = (_Bool)0;
unsigned char var_15 = (unsigned char)72;
int zero = 0;
long long int var_17 = 3693989844565788452LL;
signed char var_18 = (signed char)96;
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
