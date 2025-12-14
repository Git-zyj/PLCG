#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)201;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 8187136983783412261ULL;
unsigned long long int var_4 = 11860719172989712009ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 2053238362U;
long long int var_11 = -6160820448880821037LL;
unsigned int var_12 = 3369295387U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
