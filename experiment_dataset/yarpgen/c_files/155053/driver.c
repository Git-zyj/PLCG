#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)141;
unsigned char var_2 = (unsigned char)174;
unsigned char var_3 = (unsigned char)26;
_Bool var_4 = (_Bool)0;
long long int var_5 = -1089423964010682702LL;
unsigned long long int var_7 = 13049819678068997215ULL;
long long int var_10 = 8565453709104119329LL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 9033115327694577531ULL;
unsigned int var_15 = 441975787U;
signed char var_16 = (signed char)5;
unsigned short var_17 = (unsigned short)44762;
short var_18 = (short)-15074;
_Bool var_19 = (_Bool)1;
int zero = 0;
short var_20 = (short)-12115;
unsigned long long int var_21 = 11038300073117776169ULL;
unsigned int var_22 = 4247541855U;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)21238;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
