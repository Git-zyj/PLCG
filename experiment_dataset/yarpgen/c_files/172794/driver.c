#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14391089515478311418ULL;
long long int var_4 = 1604302530901831097LL;
signed char var_5 = (signed char)-126;
long long int var_6 = 7461473383582841919LL;
unsigned short var_7 = (unsigned short)16734;
int var_13 = 1608225031;
int zero = 0;
long long int var_16 = 8345760857571236032LL;
unsigned short var_17 = (unsigned short)43143;
signed char var_18 = (signed char)97;
signed char var_19 = (signed char)-74;
void init() {
}

void checksum() {
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
