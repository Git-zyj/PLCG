#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14062292586602774532ULL;
long long int var_7 = 5735056218475271044LL;
unsigned char var_11 = (unsigned char)201;
int zero = 0;
signed char var_19 = (signed char)84;
long long int var_20 = -6451718369970751896LL;
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
