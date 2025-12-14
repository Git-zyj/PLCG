#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)175;
unsigned char var_3 = (unsigned char)240;
unsigned short var_4 = (unsigned short)25626;
short var_7 = (short)8441;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1263778390U;
signed char var_10 = (signed char)-14;
signed char var_12 = (signed char)13;
unsigned int var_13 = 3015909494U;
int zero = 0;
signed char var_14 = (signed char)56;
int var_15 = 692884246;
unsigned int var_16 = 139101744U;
short var_17 = (short)-14133;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
