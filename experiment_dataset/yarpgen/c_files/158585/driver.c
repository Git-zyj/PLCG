#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8327380594968175679LL;
unsigned long long int var_1 = 13525795343621724039ULL;
short var_6 = (short)-10678;
unsigned int var_7 = 2538169125U;
unsigned int var_9 = 1935037302U;
signed char var_11 = (signed char)66;
long long int var_15 = 1928830724583725177LL;
int zero = 0;
long long int var_16 = -3562083709306887865LL;
short var_17 = (short)31921;
_Bool var_18 = (_Bool)0;
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
