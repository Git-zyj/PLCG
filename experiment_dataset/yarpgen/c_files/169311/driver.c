#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-11203;
unsigned long long int var_7 = 4705997546909827826ULL;
long long int var_9 = -10725599463287454LL;
unsigned long long int var_11 = 6525082498108792026ULL;
unsigned char var_12 = (unsigned char)235;
int var_15 = -1970104244;
int zero = 0;
unsigned int var_20 = 2119315936U;
unsigned long long int var_21 = 8855492611274466846ULL;
short var_22 = (short)4555;
void init() {
}

void checksum() {
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
