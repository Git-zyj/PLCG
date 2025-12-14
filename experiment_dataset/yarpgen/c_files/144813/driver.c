#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2883545281148085413LL;
unsigned long long int var_10 = 18254074247113470393ULL;
unsigned char var_11 = (unsigned char)133;
int var_12 = 1469278686;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 6034658472039200440ULL;
unsigned char var_17 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
