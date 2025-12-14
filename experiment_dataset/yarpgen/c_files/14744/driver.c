#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6209420199014670700ULL;
_Bool var_15 = (_Bool)1;
unsigned char var_17 = (unsigned char)102;
short var_18 = (short)24358;
int zero = 0;
long long int var_19 = -666719660711154898LL;
short var_20 = (short)5644;
unsigned int var_21 = 3952224249U;
unsigned char var_22 = (unsigned char)253;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
