#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14834558224879170365ULL;
unsigned short var_1 = (unsigned short)29518;
unsigned long long int var_2 = 6538234011306753679ULL;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)252;
unsigned char var_5 = (unsigned char)120;
short var_9 = (short)-12756;
int var_10 = 1907713346;
unsigned long long int var_11 = 9929828042382974706ULL;
long long int var_12 = -6401303486151981559LL;
int zero = 0;
short var_15 = (short)22860;
unsigned short var_16 = (unsigned short)55209;
_Bool var_17 = (_Bool)1;
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
