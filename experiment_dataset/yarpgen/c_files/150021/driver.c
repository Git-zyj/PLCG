#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1169;
unsigned long long int var_2 = 15172122760555086108ULL;
_Bool var_4 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-116;
long long int var_11 = 1705293109376892821LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
