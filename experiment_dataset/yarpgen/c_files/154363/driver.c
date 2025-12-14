#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -3379213239068133386LL;
signed char var_9 = (signed char)32;
long long int var_11 = 7077389948201441625LL;
long long int var_12 = 8653213611942762960LL;
int zero = 0;
long long int var_18 = 4694642713911525529LL;
unsigned int var_19 = 3303720829U;
long long int var_20 = -7972846897594508765LL;
void init() {
}

void checksum() {
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
