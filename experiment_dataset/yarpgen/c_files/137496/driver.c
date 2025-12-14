#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)3;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)164;
short var_12 = (short)25098;
short var_14 = (short)-14363;
int zero = 0;
unsigned long long int var_16 = 8735335109559449392ULL;
unsigned long long int var_17 = 11792623448972204651ULL;
short var_18 = (short)-9276;
signed char var_19 = (signed char)-51;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)245;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
