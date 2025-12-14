#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11322588754643364281ULL;
_Bool var_3 = (_Bool)1;
short var_4 = (short)27804;
short var_7 = (short)-20294;
unsigned long long int var_8 = 5502815962215823439ULL;
unsigned long long int var_16 = 11232100859381278804ULL;
long long int var_17 = 4979708770986978104LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 4109974694U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
