#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 954205821;
unsigned char var_2 = (unsigned char)230;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 2648877572U;
unsigned long long int var_10 = 15563376421934861750ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)68;
short var_14 = (short)30438;
long long int var_15 = 4504488603275205056LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
