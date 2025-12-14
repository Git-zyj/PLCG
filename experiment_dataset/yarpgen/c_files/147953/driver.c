#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8643953519039993653LL;
long long int var_2 = -5410348789561688416LL;
unsigned int var_8 = 363774438U;
int zero = 0;
unsigned char var_10 = (unsigned char)9;
unsigned char var_11 = (unsigned char)23;
unsigned int var_12 = 2865278646U;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
