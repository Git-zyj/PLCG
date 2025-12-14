#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3169488383U;
unsigned char var_1 = (unsigned char)176;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)54;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)208;
short var_9 = (short)-31429;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)165;
int zero = 0;
long long int var_13 = 4178130862561413893LL;
unsigned int var_14 = 3389008343U;
unsigned long long int var_15 = 9239819216776600877ULL;
long long int var_16 = -1988497179130345503LL;
unsigned long long int var_17 = 2666042106354599416ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
