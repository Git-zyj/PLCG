#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1779061714U;
short var_11 = (short)1458;
unsigned long long int var_14 = 12028869044736125327ULL;
int zero = 0;
unsigned long long int var_19 = 8857438313772544643ULL;
unsigned long long int var_20 = 4782645916912644556ULL;
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
