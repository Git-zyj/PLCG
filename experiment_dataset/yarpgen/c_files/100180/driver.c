#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7675005234035270187ULL;
long long int var_11 = -3920467919686868633LL;
signed char var_13 = (signed char)-122;
int zero = 0;
unsigned int var_15 = 4133226539U;
unsigned int var_16 = 537458935U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
