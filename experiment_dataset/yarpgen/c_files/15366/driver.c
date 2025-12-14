#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2038821107;
unsigned char var_5 = (unsigned char)200;
_Bool var_7 = (_Bool)0;
int var_8 = -1145142833;
_Bool var_11 = (_Bool)0;
int var_13 = -1936504218;
unsigned char var_14 = (unsigned char)19;
int zero = 0;
long long int var_15 = -5020084461237411377LL;
signed char var_16 = (signed char)-79;
signed char var_17 = (signed char)123;
unsigned char var_18 = (unsigned char)172;
unsigned char var_19 = (unsigned char)12;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
