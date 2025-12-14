#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31516;
unsigned short var_1 = (unsigned short)61187;
int var_3 = 232976826;
_Bool var_4 = (_Bool)0;
unsigned long long int var_8 = 10505926456365672128ULL;
short var_12 = (short)12251;
int zero = 0;
short var_17 = (short)-12831;
int var_18 = 1525745756;
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
