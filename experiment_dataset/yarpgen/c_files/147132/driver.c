#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-30734;
short var_3 = (short)12906;
int var_6 = -1747122727;
int var_7 = 95309262;
int var_10 = 1925551064;
int zero = 0;
int var_12 = -1536396685;
int var_13 = -1518128143;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
