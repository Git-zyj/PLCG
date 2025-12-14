#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5527769716240289212ULL;
long long int var_2 = -6817591721797053752LL;
unsigned short var_4 = (unsigned short)19419;
short var_6 = (short)-15318;
signed char var_13 = (signed char)-15;
long long int var_15 = -8337243599229695071LL;
int zero = 0;
short var_17 = (short)12929;
unsigned long long int var_18 = 12373845416916256529ULL;
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
