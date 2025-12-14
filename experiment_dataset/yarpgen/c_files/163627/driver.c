#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57377;
unsigned long long int var_2 = 16814527687524507498ULL;
unsigned long long int var_4 = 9737542956431040316ULL;
unsigned short var_6 = (unsigned short)36036;
unsigned long long int var_8 = 3588714064306654393ULL;
unsigned long long int var_9 = 2397280877532218360ULL;
int zero = 0;
unsigned long long int var_10 = 14769723762145198316ULL;
unsigned long long int var_11 = 6764372812037828620ULL;
unsigned short var_12 = (unsigned short)2672;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 260424654352162630ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
