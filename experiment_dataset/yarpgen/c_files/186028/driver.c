#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_4 = (_Bool)1;
int var_5 = 178598791;
long long int var_6 = -1559839948901213297LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 4923134183240124390ULL;
unsigned long long int var_10 = 5517181856089305215ULL;
int zero = 0;
int var_12 = -1506090242;
long long int var_13 = -2684226504924928930LL;
unsigned int var_14 = 2405846589U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
