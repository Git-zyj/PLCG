#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1181602110637696259LL;
short var_5 = (short)-16510;
unsigned int var_7 = 3531067205U;
long long int var_9 = 8275950098689244281LL;
unsigned long long int var_10 = 8392144055127981592ULL;
unsigned long long int var_11 = 15576069200069679098ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)83;
unsigned short var_15 = (unsigned short)7614;
unsigned long long int var_16 = 15678976358386918612ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
