#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1003798439;
int var_5 = 2045033004;
long long int var_6 = 5369732793634418458LL;
short var_7 = (short)5281;
unsigned short var_8 = (unsigned short)9833;
int var_9 = -13359771;
unsigned char var_11 = (unsigned char)224;
unsigned char var_12 = (unsigned char)27;
int zero = 0;
unsigned char var_14 = (unsigned char)126;
short var_15 = (short)6478;
unsigned short var_16 = (unsigned short)39530;
long long int var_17 = 8046521803267631320LL;
void init() {
}

void checksum() {
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
