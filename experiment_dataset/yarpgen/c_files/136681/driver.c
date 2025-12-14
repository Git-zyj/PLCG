#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 11139533095283203887ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 12138917699417862416ULL;
short var_6 = (short)9656;
unsigned short var_9 = (unsigned short)1755;
int var_11 = -1877670009;
unsigned char var_12 = (unsigned char)167;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_15 = -711249357;
signed char var_16 = (signed char)-12;
int var_17 = 532732593;
void init() {
}

void checksum() {
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
