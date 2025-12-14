#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -5133781696804895474LL;
long long int var_11 = 3199432522015887905LL;
int zero = 0;
long long int var_12 = 3833559674478079769LL;
long long int var_13 = 3013681382257245496LL;
long long int var_14 = 3157886107545474987LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
