#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2627638327U;
int var_2 = -1766909395;
_Bool var_7 = (_Bool)0;
int zero = 0;
long long int var_11 = -364762190843837300LL;
short var_12 = (short)-25372;
long long int var_13 = -848919242574768242LL;
int var_14 = -1425703630;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
