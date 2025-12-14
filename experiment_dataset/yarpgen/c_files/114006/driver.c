#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1602208318939804926LL;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)8;
int var_4 = 1296667573;
signed char var_7 = (signed char)-58;
short var_10 = (short)25664;
signed char var_11 = (signed char)7;
int zero = 0;
unsigned short var_13 = (unsigned short)25532;
short var_14 = (short)8982;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
