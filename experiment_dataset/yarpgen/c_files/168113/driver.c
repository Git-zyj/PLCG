#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15349262335897726199ULL;
int var_7 = -1401427798;
_Bool var_8 = (_Bool)1;
short var_11 = (short)16860;
unsigned char var_12 = (unsigned char)26;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-27;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-10754;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
