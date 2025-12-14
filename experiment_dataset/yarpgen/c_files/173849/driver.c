#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-18;
signed char var_7 = (signed char)-74;
short var_9 = (short)3326;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 5964161007044896283ULL;
_Bool var_18 = (_Bool)0;
int var_19 = -73195589;
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
