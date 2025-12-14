#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 313248387;
unsigned short var_3 = (unsigned short)64283;
long long int var_14 = 9126770105192277936LL;
int var_16 = -2086928708;
int zero = 0;
short var_20 = (short)7937;
long long int var_21 = -8202821794987154204LL;
int var_22 = 435906819;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
