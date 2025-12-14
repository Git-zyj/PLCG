#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-90;
short var_3 = (short)-23449;
long long int var_6 = 3508537634749233487LL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2280194076U;
unsigned short var_12 = (unsigned short)23677;
int zero = 0;
short var_13 = (short)28941;
unsigned char var_14 = (unsigned char)27;
int var_15 = -783303915;
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
