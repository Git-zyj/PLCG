#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12169928972722846701ULL;
int var_2 = -1487398308;
int var_3 = 84842275;
short var_7 = (short)9878;
int zero = 0;
int var_10 = 1226800123;
unsigned int var_11 = 2953831562U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
