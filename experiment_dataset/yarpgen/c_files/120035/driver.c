#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1105978310U;
long long int var_3 = 3180385987788717241LL;
long long int var_5 = 8261735424594164518LL;
unsigned short var_7 = (unsigned short)27195;
unsigned int var_8 = 2178898012U;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 17817445201366564351ULL;
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
