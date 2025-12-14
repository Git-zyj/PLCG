#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3953163124431888394LL;
unsigned long long int var_6 = 2412144074150181893ULL;
short var_7 = (short)6676;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-27535;
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
