#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3807524405892803729ULL;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 3069694609U;
unsigned char var_5 = (unsigned char)2;
long long int var_6 = -5882390465171838587LL;
int var_7 = 17552033;
short var_8 = (short)57;
short var_9 = (short)9793;
short var_11 = (short)1;
short var_12 = (short)24760;
int var_17 = -1276778444;
int zero = 0;
short var_18 = (short)2832;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)62310;
int var_21 = 922828629;
void init() {
}

void checksum() {
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
