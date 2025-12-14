#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14564823492233140399ULL;
unsigned short var_6 = (unsigned short)32748;
int var_8 = 1112902588;
short var_11 = (short)26177;
int zero = 0;
long long int var_12 = 7005031460622182903LL;
unsigned char var_13 = (unsigned char)214;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)57;
signed char var_16 = (signed char)-21;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
