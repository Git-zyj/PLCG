#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)188;
unsigned char var_1 = (unsigned char)244;
short var_2 = (short)-23375;
signed char var_4 = (signed char)-51;
unsigned char var_5 = (unsigned char)159;
unsigned int var_7 = 1641219146U;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)-44;
int zero = 0;
int var_13 = -81680886;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-40;
signed char var_16 = (signed char)-79;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
