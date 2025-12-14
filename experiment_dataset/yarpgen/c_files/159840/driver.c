#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28409;
unsigned long long int var_3 = 17209782358650114875ULL;
int var_6 = 295996029;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 13132176596024926117ULL;
unsigned short var_13 = (unsigned short)46850;
signed char var_15 = (signed char)-123;
short var_16 = (short)-19719;
int zero = 0;
short var_17 = (short)17987;
_Bool var_18 = (_Bool)1;
long long int var_19 = -746849757390818185LL;
unsigned char var_20 = (unsigned char)161;
int var_21 = -1079537985;
int var_22 = -702206519;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
