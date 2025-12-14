#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2205875553903152207ULL;
long long int var_6 = -4229863885456568561LL;
long long int var_9 = -7234693746811163079LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -2169509388826025360LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
