#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
int var_1 = -1910590360;
short var_2 = (short)-14668;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 2211044692U;
int var_6 = -205642057;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 3902179067U;
unsigned long long int var_11 = 11170407080626298353ULL;
signed char var_13 = (signed char)11;
signed char var_15 = (signed char)93;
int zero = 0;
signed char var_16 = (signed char)-94;
unsigned int var_17 = 3943998907U;
unsigned int var_18 = 3023298216U;
void init() {
}

void checksum() {
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
