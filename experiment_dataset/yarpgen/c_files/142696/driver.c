#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13452742887102633168ULL;
long long int var_14 = 896347971334409375LL;
int zero = 0;
unsigned long long int var_17 = 3091425867313329879ULL;
unsigned short var_18 = (unsigned short)34785;
short var_19 = (short)26095;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
