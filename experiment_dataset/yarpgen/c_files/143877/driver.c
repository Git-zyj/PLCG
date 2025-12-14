#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3479;
_Bool var_1 = (_Bool)0;
short var_2 = (short)18327;
signed char var_3 = (signed char)75;
unsigned int var_6 = 3784726144U;
signed char var_8 = (signed char)114;
signed char var_9 = (signed char)-79;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
