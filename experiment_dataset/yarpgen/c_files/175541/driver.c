#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6589856077155936429ULL;
long long int var_2 = 2294061281079234469LL;
short var_3 = (short)28630;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)1;
long long int var_11 = 410814830866265059LL;
int zero = 0;
long long int var_12 = -6453569291652821770LL;
int var_13 = -544266722;
long long int var_14 = 6172949236461307282LL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)61;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
