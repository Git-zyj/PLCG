#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12940090670013705378ULL;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-19384;
short var_7 = (short)25829;
int var_8 = -429455358;
unsigned short var_10 = (unsigned short)28571;
unsigned short var_12 = (unsigned short)12935;
signed char var_16 = (signed char)-39;
int zero = 0;
short var_17 = (short)99;
unsigned int var_18 = 1296844616U;
int var_19 = -979796463;
unsigned char var_20 = (unsigned char)133;
int var_21 = -1625480171;
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
