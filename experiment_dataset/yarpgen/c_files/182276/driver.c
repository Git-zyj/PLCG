#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_6 = (_Bool)1;
short var_10 = (short)-15457;
unsigned short var_11 = (unsigned short)65372;
short var_12 = (short)-21715;
unsigned int var_15 = 4133472412U;
int zero = 0;
short var_17 = (short)-11621;
short var_18 = (short)-3426;
unsigned long long int var_19 = 17737572257548376943ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
