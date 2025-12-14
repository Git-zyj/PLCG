#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2086377433;
unsigned short var_1 = (unsigned short)27337;
int var_2 = 1552194171;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 17876430412080827265ULL;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-13073;
long long int var_10 = -4459422247491218422LL;
_Bool var_15 = (_Bool)0;
signed char var_17 = (signed char)-89;
signed char var_18 = (signed char)14;
int zero = 0;
short var_19 = (short)13536;
unsigned char var_20 = (unsigned char)84;
unsigned int var_21 = 3019175176U;
void init() {
}

void checksum() {
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
