#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)19422;
unsigned int var_6 = 1091060648U;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 12971163073691691440ULL;
_Bool var_11 = (_Bool)0;
unsigned int var_14 = 1994174640U;
_Bool var_15 = (_Bool)1;
long long int var_17 = -2251251943205658662LL;
int zero = 0;
unsigned char var_19 = (unsigned char)50;
long long int var_20 = 5078148858491532481LL;
long long int var_21 = -6352696234861750153LL;
unsigned long long int var_22 = 10152165877719850103ULL;
unsigned int var_23 = 2101751024U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
