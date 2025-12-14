#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)6731;
unsigned int var_4 = 1462850543U;
int var_6 = -393396485;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 2638580075759063316ULL;
int zero = 0;
int var_18 = 1863702213;
long long int var_19 = -1080080090920724205LL;
short var_20 = (short)-21222;
void init() {
}

void checksum() {
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
