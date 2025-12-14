#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)182;
unsigned short var_3 = (unsigned short)20867;
unsigned long long int var_5 = 16261265010884961887ULL;
unsigned short var_7 = (unsigned short)59488;
int var_11 = -1199670417;
long long int var_14 = 46821296768170107LL;
unsigned short var_15 = (unsigned short)36069;
signed char var_19 = (signed char)-69;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)178;
long long int var_23 = 1544192568504003723LL;
void init() {
}

void checksum() {
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
