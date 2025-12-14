#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6462835077416807538LL;
long long int var_2 = 2439911843767626358LL;
signed char var_3 = (signed char)-8;
short var_6 = (short)8043;
signed char var_7 = (signed char)-46;
short var_9 = (short)4092;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 13417198297609869782ULL;
signed char var_15 = (signed char)-107;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
