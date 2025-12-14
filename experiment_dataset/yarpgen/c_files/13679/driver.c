#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)14238;
int var_13 = -1058011691;
unsigned char var_15 = (unsigned char)218;
unsigned char var_16 = (unsigned char)194;
int zero = 0;
int var_17 = 1858397650;
unsigned long long int var_18 = 2218233196661048158ULL;
long long int var_19 = -7921171802356498159LL;
int var_20 = -1888705820;
unsigned char var_21 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
