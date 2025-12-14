#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 437569392;
_Bool var_1 = (_Bool)1;
int var_2 = -1631617814;
_Bool var_3 = (_Bool)0;
long long int var_4 = -9051869206543696144LL;
short var_6 = (short)2470;
unsigned int var_7 = 337175679U;
short var_9 = (short)-23816;
short var_10 = (short)-12127;
short var_11 = (short)-12561;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)5;
int var_14 = 1728606182;
_Bool var_16 = (_Bool)1;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 981824432U;
unsigned char var_22 = (unsigned char)163;
void init() {
}

void checksum() {
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
