#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9971;
long long int var_5 = -5667173751569507758LL;
signed char var_6 = (signed char)-34;
unsigned int var_8 = 2453495942U;
unsigned short var_9 = (unsigned short)6555;
unsigned short var_11 = (unsigned short)35514;
int zero = 0;
signed char var_13 = (signed char)-40;
short var_14 = (short)30710;
unsigned short var_15 = (unsigned short)44572;
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
