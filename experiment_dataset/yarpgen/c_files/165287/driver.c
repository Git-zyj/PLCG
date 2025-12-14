#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18728;
unsigned int var_2 = 4081180058U;
unsigned short var_3 = (unsigned short)44262;
short var_4 = (short)3768;
unsigned short var_14 = (unsigned short)38118;
int zero = 0;
unsigned int var_18 = 644193006U;
short var_19 = (short)-13567;
short var_20 = (short)2937;
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
