#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2108735714716983299LL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)40347;
unsigned char var_8 = (unsigned char)88;
unsigned long long int var_12 = 5832585245934525959ULL;
signed char var_13 = (signed char)-46;
unsigned int var_14 = 3025485U;
unsigned long long int var_16 = 2550681571084346604ULL;
unsigned char var_17 = (unsigned char)177;
short var_18 = (short)-24789;
unsigned char var_19 = (unsigned char)102;
int zero = 0;
int var_20 = 1047029045;
short var_21 = (short)-28820;
unsigned int var_22 = 950313287U;
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
