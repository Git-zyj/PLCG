#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2352758419109402685ULL;
unsigned long long int var_3 = 11713074859799533268ULL;
unsigned char var_8 = (unsigned char)68;
int var_10 = 1407440923;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -5112922127548639237LL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)45009;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
