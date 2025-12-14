#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1423006142;
unsigned long long int var_7 = 5633831332162752560ULL;
short var_8 = (short)29808;
int zero = 0;
int var_11 = 1439324270;
unsigned long long int var_12 = 12340077776054572802ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
