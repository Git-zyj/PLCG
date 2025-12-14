#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31518;
unsigned long long int var_2 = 4178341417526330761ULL;
unsigned char var_3 = (unsigned char)72;
unsigned char var_5 = (unsigned char)165;
unsigned char var_10 = (unsigned char)217;
unsigned short var_11 = (unsigned short)39230;
unsigned int var_12 = 1113169602U;
signed char var_13 = (signed char)-106;
short var_14 = (short)-11885;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-18780;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 17836210534103980936ULL;
unsigned long long int var_22 = 17962451188404539710ULL;
void init() {
}

void checksum() {
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
