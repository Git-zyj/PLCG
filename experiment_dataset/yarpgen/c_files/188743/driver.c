#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7525;
unsigned short var_1 = (unsigned short)31165;
int var_5 = 2103636541;
unsigned int var_7 = 3746155511U;
int zero = 0;
unsigned long long int var_17 = 14616599546821440277ULL;
unsigned long long int var_18 = 3955970687335226339ULL;
int var_19 = 1770360549;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
