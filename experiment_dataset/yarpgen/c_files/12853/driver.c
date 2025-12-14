#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7650304004831657163ULL;
_Bool var_2 = (_Bool)1;
long long int var_4 = 5428959432034081095LL;
unsigned long long int var_5 = 13870118463471345273ULL;
unsigned int var_6 = 2873351701U;
unsigned short var_7 = (unsigned short)26894;
long long int var_8 = -4700125583732261973LL;
int zero = 0;
unsigned int var_10 = 3239093872U;
unsigned long long int var_11 = 13801867422824084658ULL;
unsigned short var_12 = (unsigned short)26118;
long long int var_13 = -1650319427328010000LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
