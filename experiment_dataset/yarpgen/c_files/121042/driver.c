#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1512618996;
int var_2 = -533907217;
unsigned long long int var_6 = 9362444037074644282ULL;
signed char var_7 = (signed char)6;
int zero = 0;
int var_10 = -239516932;
long long int var_11 = -5822451142219687354LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
