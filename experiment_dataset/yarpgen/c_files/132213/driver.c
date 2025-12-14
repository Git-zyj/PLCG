#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -364358755250323227LL;
signed char var_12 = (signed char)-67;
signed char var_13 = (signed char)-59;
long long int var_14 = -8613205305450790355LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_19 = 840425333240269129LL;
short var_20 = (short)-5410;
void init() {
}

void checksum() {
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
