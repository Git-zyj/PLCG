#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7036037164403116010LL;
short var_3 = (short)-14282;
int zero = 0;
long long int var_12 = -2310851411781117390LL;
unsigned short var_13 = (unsigned short)11680;
_Bool var_14 = (_Bool)1;
long long int var_15 = 4079258748120648291LL;
void init() {
}

void checksum() {
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
