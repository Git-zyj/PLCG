#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1312478231;
unsigned int var_1 = 3015778816U;
short var_2 = (short)32045;
unsigned int var_4 = 3421353901U;
unsigned short var_6 = (unsigned short)40917;
long long int var_7 = 6429861482558312898LL;
unsigned int var_8 = 4030541210U;
unsigned long long int var_11 = 119636726628702898ULL;
short var_12 = (short)4039;
unsigned short var_15 = (unsigned short)60288;
long long int var_16 = -5568146125870651365LL;
unsigned short var_18 = (unsigned short)14068;
int zero = 0;
unsigned char var_19 = (unsigned char)246;
unsigned short var_20 = (unsigned short)36315;
int var_21 = 924982054;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
