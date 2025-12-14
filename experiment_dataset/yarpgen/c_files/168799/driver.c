#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14361210941067845615ULL;
int var_1 = -1005716134;
unsigned char var_2 = (unsigned char)143;
int var_3 = -1792895861;
unsigned short var_4 = (unsigned short)25580;
long long int var_6 = 1928832342456412621LL;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-113;
unsigned char var_9 = (unsigned char)176;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)31;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)24111;
unsigned char var_16 = (unsigned char)159;
int zero = 0;
unsigned int var_17 = 3711906602U;
signed char var_18 = (signed char)-115;
signed char var_19 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
