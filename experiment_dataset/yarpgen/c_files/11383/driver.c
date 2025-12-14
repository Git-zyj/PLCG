#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4326360471978711687LL;
unsigned int var_2 = 439852136U;
long long int var_5 = 167176648494118614LL;
signed char var_7 = (signed char)116;
int zero = 0;
unsigned int var_15 = 1953758475U;
signed char var_16 = (signed char)37;
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
