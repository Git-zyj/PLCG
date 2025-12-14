#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10627056805342775812ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 193939310U;
unsigned long long int var_18 = 1199569223272171831ULL;
unsigned int var_19 = 1278027343U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
