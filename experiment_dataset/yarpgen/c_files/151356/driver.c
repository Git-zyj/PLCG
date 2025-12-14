#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5230;
unsigned char var_5 = (unsigned char)128;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 5942908412420350724ULL;
long long int var_11 = -7985980933630548261LL;
unsigned long long int var_12 = 969761213764661770ULL;
short var_14 = (short)-12680;
unsigned short var_16 = (unsigned short)31598;
int zero = 0;
signed char var_17 = (signed char)-1;
unsigned long long int var_18 = 2823286645937503589ULL;
int var_19 = -1009910794;
long long int var_20 = -7488547176729988647LL;
void init() {
}

void checksum() {
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
