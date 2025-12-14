#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -705278088401599515LL;
long long int var_13 = 3664582073266033409LL;
short var_14 = (short)21901;
unsigned short var_15 = (unsigned short)17376;
unsigned short var_19 = (unsigned short)29252;
int zero = 0;
unsigned int var_20 = 3781435293U;
short var_21 = (short)10402;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
