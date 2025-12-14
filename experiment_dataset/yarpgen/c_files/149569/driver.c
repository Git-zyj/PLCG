#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_6 = (signed char)-104;
unsigned int var_7 = 60447743U;
unsigned char var_9 = (unsigned char)163;
int var_12 = -1139149965;
signed char var_14 = (signed char)102;
short var_17 = (short)-29247;
int zero = 0;
unsigned char var_18 = (unsigned char)117;
long long int var_19 = -6289645217001660355LL;
void init() {
}

void checksum() {
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
