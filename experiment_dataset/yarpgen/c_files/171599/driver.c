#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26485;
int var_2 = 393883399;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 12206735316958356424ULL;
int zero = 0;
int var_12 = -1933886806;
int var_13 = 931292095;
int var_14 = 1407502902;
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
