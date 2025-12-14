#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_4 = 15873494986231216553ULL;
unsigned long long int var_5 = 16310952885201701684ULL;
unsigned char var_6 = (unsigned char)137;
long long int var_7 = 4878967960247843617LL;
unsigned char var_8 = (unsigned char)245;
int zero = 0;
short var_10 = (short)-11716;
unsigned short var_11 = (unsigned short)51197;
short var_12 = (short)-19420;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
