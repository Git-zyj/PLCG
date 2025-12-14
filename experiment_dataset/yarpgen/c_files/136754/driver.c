#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7256913883992191619LL;
unsigned long long int var_6 = 12680629113754863208ULL;
unsigned long long int var_7 = 4912652200767325863ULL;
int var_8 = 1835084188;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 3569995621148419751ULL;
short var_21 = (short)-6957;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
