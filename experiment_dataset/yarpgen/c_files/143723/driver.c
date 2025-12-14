#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18951;
unsigned int var_1 = 178725075U;
int var_3 = -158829488;
short var_5 = (short)-27986;
short var_8 = (short)-2600;
unsigned int var_9 = 1936195879U;
unsigned long long int var_12 = 6617378068886014203ULL;
short var_13 = (short)-11626;
unsigned long long int var_14 = 10097860158045863182ULL;
int zero = 0;
int var_16 = -454960172;
int var_17 = -1842511623;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 667005725U;
unsigned char var_20 = (unsigned char)140;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
