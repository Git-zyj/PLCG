#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6073033249009260505LL;
_Bool var_5 = (_Bool)1;
short var_10 = (short)-28354;
int zero = 0;
long long int var_14 = -7595164675444385640LL;
unsigned short var_15 = (unsigned short)64564;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
