#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2497789038U;
_Bool var_1 = (_Bool)1;
long long int var_2 = 8696894267645785324LL;
_Bool var_3 = (_Bool)1;
unsigned int var_9 = 2901587997U;
int zero = 0;
long long int var_10 = -4014634066858803212LL;
_Bool var_11 = (_Bool)0;
int var_12 = 720063500;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
