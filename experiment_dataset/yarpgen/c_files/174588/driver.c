#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4310887378259724354LL;
short var_3 = (short)-13243;
short var_5 = (short)-20680;
long long int var_7 = -8471686641530690976LL;
short var_10 = (short)-24932;
long long int var_12 = -7459398988949813501LL;
short var_13 = (short)26218;
long long int var_15 = -8659664739975637472LL;
int zero = 0;
long long int var_16 = 6989782224246432292LL;
short var_17 = (short)-20566;
long long int var_18 = -283183121591260712LL;
long long int var_19 = 810229066879363250LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
