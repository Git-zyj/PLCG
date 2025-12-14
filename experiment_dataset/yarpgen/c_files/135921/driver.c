#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2277921878995846106LL;
long long int var_1 = 7391067356618868148LL;
unsigned long long int var_3 = 12005007745554712906ULL;
int var_4 = 1628525453;
signed char var_6 = (signed char)32;
int var_7 = -1825808325;
signed char var_8 = (signed char)-1;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 7650248647267963093ULL;
int var_13 = -106808448;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
