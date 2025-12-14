#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 10258106485889107484ULL;
unsigned long long int var_12 = 9444315629928208119ULL;
int zero = 0;
unsigned long long int var_20 = 9534791864675199373ULL;
unsigned int var_21 = 2380406935U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
