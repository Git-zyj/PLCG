#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17471;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-8781;
long long int var_5 = 2267360419060800608LL;
unsigned int var_6 = 3460596477U;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-21207;
int var_9 = -1502909464;
int zero = 0;
short var_10 = (short)4501;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)83;
short var_13 = (short)-27691;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
