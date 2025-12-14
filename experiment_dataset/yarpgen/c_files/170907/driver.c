#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-3873;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)32968;
long long int var_8 = 5701549493464425537LL;
int var_9 = 1205023811;
unsigned int var_10 = 495004858U;
short var_15 = (short)27950;
int zero = 0;
int var_17 = -316478910;
unsigned int var_18 = 1073357988U;
long long int var_19 = 2424170543702225286LL;
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
