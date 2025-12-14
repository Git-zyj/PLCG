#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9219;
long long int var_2 = -3076217676284132441LL;
unsigned int var_6 = 926234410U;
signed char var_9 = (signed char)25;
unsigned int var_10 = 107978066U;
signed char var_11 = (signed char)59;
unsigned short var_12 = (unsigned short)40718;
int zero = 0;
signed char var_16 = (signed char)116;
signed char var_17 = (signed char)-68;
unsigned int var_18 = 1775647221U;
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
