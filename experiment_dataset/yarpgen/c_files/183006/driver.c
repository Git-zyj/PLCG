#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8507554027398903628ULL;
_Bool var_2 = (_Bool)1;
short var_8 = (short)-27340;
short var_10 = (short)-21265;
long long int var_13 = -4073273014119000253LL;
int var_14 = 1991496575;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)3;
int zero = 0;
int var_19 = 76581078;
long long int var_20 = -616397588923838671LL;
void init() {
}

void checksum() {
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
