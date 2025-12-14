#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31971;
signed char var_1 = (signed char)124;
unsigned short var_4 = (unsigned short)47215;
short var_7 = (short)29098;
unsigned long long int var_8 = 13320985564935076483ULL;
unsigned long long int var_9 = 14007610282531475579ULL;
int var_13 = -242220573;
int zero = 0;
unsigned int var_18 = 1593072150U;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)145;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
