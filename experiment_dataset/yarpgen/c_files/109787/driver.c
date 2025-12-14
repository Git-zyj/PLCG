#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5693035435422689147LL;
int var_7 = 450576261;
unsigned long long int var_9 = 3143789616912432655ULL;
int zero = 0;
unsigned int var_13 = 3959874702U;
unsigned long long int var_14 = 7109677342071952082ULL;
signed char var_15 = (signed char)-30;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
