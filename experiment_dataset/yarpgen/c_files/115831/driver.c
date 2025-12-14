#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11983542179332020508ULL;
int var_3 = -1569162552;
int var_5 = -1310671063;
_Bool var_6 = (_Bool)1;
int var_7 = 1330922340;
signed char var_8 = (signed char)-53;
unsigned char var_10 = (unsigned char)240;
int zero = 0;
long long int var_11 = -5192238729501124718LL;
unsigned long long int var_12 = 15211084463231128758ULL;
unsigned char var_13 = (unsigned char)211;
unsigned short var_14 = (unsigned short)13683;
void init() {
}

void checksum() {
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
