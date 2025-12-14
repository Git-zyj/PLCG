#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3194;
unsigned short var_3 = (unsigned short)46213;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 5081998772289645274ULL;
unsigned char var_8 = (unsigned char)187;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 3005534254U;
unsigned int var_12 = 660366845U;
unsigned int var_13 = 1783771369U;
unsigned char var_14 = (unsigned char)134;
short var_15 = (short)32449;
unsigned long long int var_16 = 1770013597741232955ULL;
unsigned long long int var_18 = 17838233292185262905ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)26324;
unsigned long long int var_20 = 8262203589766850507ULL;
unsigned int var_21 = 278496214U;
long long int var_22 = 7025834227103229523LL;
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
