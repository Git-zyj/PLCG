#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1941628767;
int var_3 = 1794949227;
int var_5 = 1213735706;
int var_7 = -1315295876;
int var_15 = 944848952;
int zero = 0;
int var_18 = -307776019;
int var_19 = 1311537706;
int var_20 = -1371345867;
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
