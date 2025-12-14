#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2708;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
long long int var_7 = 6514756546494907728LL;
int zero = 0;
unsigned long long int var_12 = 17749896658529487839ULL;
long long int var_13 = -1344511817426090052LL;
unsigned long long int var_14 = 1250250307168973662ULL;
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
