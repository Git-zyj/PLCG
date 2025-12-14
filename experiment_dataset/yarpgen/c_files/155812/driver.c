#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)109;
long long int var_2 = -7277290553562967423LL;
_Bool var_3 = (_Bool)1;
long long int var_7 = 5649120701659857216LL;
unsigned long long int var_14 = 3108100003719582178ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_17 = -7368263690268904622LL;
long long int var_18 = -9067947107593613279LL;
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
