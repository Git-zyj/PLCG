#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19666;
int var_2 = 109260381;
int var_5 = -1723715302;
short var_6 = (short)20276;
int var_9 = -271060456;
unsigned char var_10 = (unsigned char)10;
unsigned short var_11 = (unsigned short)3173;
unsigned int var_12 = 1088764704U;
int zero = 0;
long long int var_15 = -248713827583197055LL;
unsigned int var_16 = 3238729194U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
