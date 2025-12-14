#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28220;
short var_2 = (short)-11299;
short var_5 = (short)-25834;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)58;
int zero = 0;
unsigned char var_15 = (unsigned char)0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)107;
unsigned short var_18 = (unsigned short)11026;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
