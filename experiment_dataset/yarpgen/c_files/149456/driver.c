#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)32;
long long int var_3 = -3828625038441000204LL;
unsigned long long int var_4 = 8757567865497216875ULL;
unsigned short var_6 = (unsigned short)14020;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)61;
int zero = 0;
unsigned long long int var_10 = 7511635795564970240ULL;
long long int var_11 = -493358410274325384LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
