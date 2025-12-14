#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)19;
int var_8 = -1391773268;
int var_9 = 287867706;
unsigned char var_12 = (unsigned char)29;
short var_13 = (short)-29906;
int zero = 0;
unsigned long long int var_15 = 877015820503505541ULL;
int var_16 = 2008439907;
int var_17 = 519633415;
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
