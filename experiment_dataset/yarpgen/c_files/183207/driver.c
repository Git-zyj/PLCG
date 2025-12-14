#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13194;
signed char var_3 = (signed char)84;
unsigned int var_4 = 2431691583U;
unsigned long long int var_5 = 12947035341789259951ULL;
unsigned char var_6 = (unsigned char)90;
unsigned short var_9 = (unsigned short)49008;
unsigned long long int var_12 = 2432293513582513357ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)113;
_Bool var_15 = (_Bool)1;
short var_16 = (short)26451;
unsigned int var_17 = 1999683115U;
unsigned long long int var_18 = 4591312131071020138ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
