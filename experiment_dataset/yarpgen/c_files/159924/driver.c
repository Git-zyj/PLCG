#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1225550935U;
unsigned long long int var_3 = 11945415869598011804ULL;
unsigned int var_4 = 2214035009U;
unsigned int var_5 = 631510316U;
unsigned long long int var_8 = 4782031972219983083ULL;
short var_9 = (short)13011;
int zero = 0;
short var_11 = (short)4074;
unsigned long long int var_12 = 6966111238776884192ULL;
short var_13 = (short)8232;
short var_14 = (short)-20204;
long long int var_15 = -7819880019517269689LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
