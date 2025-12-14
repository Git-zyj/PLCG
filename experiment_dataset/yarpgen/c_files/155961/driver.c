#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 66566931;
_Bool var_5 = (_Bool)1;
int var_6 = 679950376;
int zero = 0;
short var_10 = (short)13231;
short var_11 = (short)-3115;
unsigned long long int var_12 = 13835863690426728491ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
