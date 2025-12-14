#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1438977770U;
long long int var_5 = 565846237647776622LL;
unsigned long long int var_6 = 11035668398024110126ULL;
unsigned char var_7 = (unsigned char)129;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 4284471855U;
unsigned long long int var_14 = 2632506949228656802ULL;
unsigned char var_15 = (unsigned char)154;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
