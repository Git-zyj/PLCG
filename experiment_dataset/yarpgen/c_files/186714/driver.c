#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23807;
unsigned int var_3 = 568945920U;
unsigned long long int var_6 = 6638599120323951397ULL;
_Bool var_10 = (_Bool)1;
long long int var_11 = -2025993441479861784LL;
int zero = 0;
short var_18 = (short)28889;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
