#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25289;
unsigned char var_1 = (unsigned char)94;
short var_2 = (short)4910;
short var_3 = (short)-28258;
short var_4 = (short)-15043;
signed char var_5 = (signed char)87;
short var_6 = (short)-7070;
long long int var_7 = 6424525579821354568LL;
int var_9 = -1596545435;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_14 = -683830547;
int var_15 = 480863568;
short var_16 = (short)14899;
void init() {
}

void checksum() {
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
