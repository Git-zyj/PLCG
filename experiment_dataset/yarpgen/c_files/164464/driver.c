#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 587178521U;
short var_1 = (short)-31527;
unsigned int var_4 = 2471835497U;
unsigned char var_7 = (unsigned char)228;
unsigned char var_9 = (unsigned char)39;
unsigned short var_13 = (unsigned short)5039;
unsigned short var_14 = (unsigned short)59407;
int zero = 0;
unsigned short var_17 = (unsigned short)25219;
int var_18 = -1079163468;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
