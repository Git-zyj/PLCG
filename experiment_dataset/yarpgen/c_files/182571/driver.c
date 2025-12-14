#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3050696652324393580LL;
long long int var_3 = 4239152087798172009LL;
long long int var_6 = -2654385857558943410LL;
int var_11 = -980720045;
int zero = 0;
long long int var_14 = 384274357774334511LL;
long long int var_15 = -8779422375807604326LL;
void init() {
}

void checksum() {
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
