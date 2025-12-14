#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)47741;
unsigned int var_4 = 2937983027U;
signed char var_8 = (signed char)92;
int var_9 = 1737400815;
long long int var_11 = 5332094049096229958LL;
short var_13 = (short)-10739;
int zero = 0;
long long int var_18 = 1772126421510337408LL;
unsigned long long int var_19 = 9755506401323212046ULL;
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
