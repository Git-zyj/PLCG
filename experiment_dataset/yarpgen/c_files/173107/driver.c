#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)44;
unsigned short var_2 = (unsigned short)4232;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)24336;
signed char var_9 = (signed char)61;
unsigned int var_10 = 2682019160U;
signed char var_11 = (signed char)50;
signed char var_13 = (signed char)58;
int zero = 0;
unsigned int var_15 = 3145080012U;
unsigned int var_16 = 238289837U;
unsigned short var_17 = (unsigned short)65231;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
long long int var_20 = 3635796664820529080LL;
signed char var_21 = (signed char)-32;
signed char var_22 = (signed char)-123;
signed char var_23 = (signed char)109;
short var_24 = (short)16648;
unsigned char var_25 = (unsigned char)47;
int var_26 = -1807636602;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
