#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2400250964027457733LL;
unsigned short var_6 = (unsigned short)35987;
short var_9 = (short)-31394;
unsigned short var_11 = (unsigned short)63298;
int zero = 0;
unsigned int var_17 = 2938910468U;
unsigned int var_18 = 226847643U;
long long int var_19 = 9186891084309804347LL;
long long int var_20 = -4203571559202745417LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
