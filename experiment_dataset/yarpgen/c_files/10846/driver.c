#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-15233;
_Bool var_4 = (_Bool)1;
long long int var_5 = 3728065602615353580LL;
unsigned short var_9 = (unsigned short)30760;
int zero = 0;
short var_16 = (short)32061;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-120;
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
