#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1873339477;
unsigned long long int var_5 = 13969214231338214155ULL;
unsigned short var_6 = (unsigned short)14552;
int zero = 0;
unsigned int var_20 = 1623529178U;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-26919;
int var_23 = -1971904383;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
