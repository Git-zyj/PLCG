#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)40;
unsigned int var_6 = 949037180U;
unsigned long long int var_8 = 8082661974424745272ULL;
int zero = 0;
long long int var_14 = 275021377676401967LL;
signed char var_15 = (signed char)84;
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
