#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 17018870378202405847ULL;
unsigned int var_8 = 3765876425U;
unsigned long long int var_9 = 12631693677188853934ULL;
unsigned char var_11 = (unsigned char)133;
unsigned short var_13 = (unsigned short)27643;
long long int var_17 = 984324278467581755LL;
int zero = 0;
short var_18 = (short)-29061;
signed char var_19 = (signed char)34;
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
