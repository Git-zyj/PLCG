#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 250847556;
int var_3 = 463199202;
unsigned int var_4 = 2586429666U;
signed char var_8 = (signed char)-48;
signed char var_9 = (signed char)80;
unsigned long long int var_13 = 17180743800376643080ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)72;
long long int var_15 = -1692193737996994741LL;
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
