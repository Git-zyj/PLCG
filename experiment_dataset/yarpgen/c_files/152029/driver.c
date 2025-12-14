#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9640;
short var_5 = (short)13133;
short var_13 = (short)-19538;
long long int var_14 = -8130833380369880527LL;
short var_16 = (short)-7082;
int zero = 0;
long long int var_17 = -2752551451369948783LL;
long long int var_18 = -1942687210854251145LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
