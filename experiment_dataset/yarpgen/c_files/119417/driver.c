#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)15685;
unsigned short var_6 = (unsigned short)63834;
unsigned int var_8 = 1046344415U;
long long int var_10 = 1218062619565218825LL;
long long int var_11 = -4851572677258906963LL;
unsigned long long int var_14 = 4157834320520816728ULL;
int zero = 0;
unsigned long long int var_15 = 9424373426311970983ULL;
unsigned long long int var_16 = 1087068622632067078ULL;
long long int var_17 = 2016594120326614125LL;
void init() {
}

void checksum() {
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
