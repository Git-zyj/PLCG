#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2894302518182249894LL;
long long int var_6 = -7927201953159701768LL;
short var_12 = (short)-10165;
short var_13 = (short)-15184;
long long int var_16 = -5760266409189683538LL;
int zero = 0;
unsigned short var_17 = (unsigned short)31206;
int var_18 = -321617358;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)64934;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
