#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4930810181545445353LL;
short var_4 = (short)25745;
unsigned short var_6 = (unsigned short)30440;
long long int var_7 = 9154987321826480829LL;
_Bool var_9 = (_Bool)1;
short var_12 = (short)32016;
unsigned int var_13 = 302756048U;
int zero = 0;
unsigned char var_16 = (unsigned char)88;
int var_17 = 376463934;
int var_18 = 1310117274;
long long int var_19 = 1491284261585009957LL;
void init() {
}

void checksum() {
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
