#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2407778685492679210ULL;
signed char var_3 = (signed char)64;
unsigned char var_5 = (unsigned char)131;
unsigned char var_10 = (unsigned char)61;
int var_12 = -409407885;
int zero = 0;
int var_17 = 387441489;
_Bool var_18 = (_Bool)1;
long long int var_19 = 4427559678881190565LL;
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
