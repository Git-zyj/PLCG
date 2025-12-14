#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)105;
long long int var_3 = 6278597004731401842LL;
long long int var_8 = 7744044082255295984LL;
int var_9 = 80191157;
_Bool var_10 = (_Bool)1;
int var_13 = 154403979;
int zero = 0;
unsigned char var_19 = (unsigned char)152;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 11484504339911861529ULL;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)215;
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
