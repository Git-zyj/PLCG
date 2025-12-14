#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17634;
long long int var_2 = -8132270660736834554LL;
unsigned char var_3 = (unsigned char)212;
unsigned long long int var_4 = 3657596770840172007ULL;
_Bool var_5 = (_Bool)1;
long long int var_7 = -6312042598540249052LL;
signed char var_8 = (signed char)5;
unsigned long long int var_10 = 2364379008432139553ULL;
unsigned char var_11 = (unsigned char)121;
unsigned int var_12 = 3916233826U;
int zero = 0;
signed char var_15 = (signed char)-96;
long long int var_16 = -6571789754295315149LL;
int var_17 = 187197691;
long long int var_18 = 8706113364656254783LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
