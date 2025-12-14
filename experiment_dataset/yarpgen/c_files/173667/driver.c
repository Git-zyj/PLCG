#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)226;
unsigned char var_1 = (unsigned char)195;
unsigned int var_3 = 3880291081U;
unsigned int var_5 = 4030795036U;
long long int var_9 = 8024298033480864666LL;
signed char var_11 = (signed char)-2;
signed char var_14 = (signed char)34;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = -321586151;
signed char var_17 = (signed char)-26;
signed char var_18 = (signed char)82;
unsigned int var_19 = 2850490825U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
