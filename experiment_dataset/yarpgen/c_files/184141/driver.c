#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1009992843U;
long long int var_8 = 582417152243887388LL;
long long int var_17 = -5667191730445041132LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 253578424U;
long long int var_21 = -7340332379734483833LL;
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
