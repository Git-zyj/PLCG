#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1481307667;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)47;
long long int var_8 = 5702104355721729248LL;
signed char var_9 = (signed char)98;
int zero = 0;
int var_11 = 1328912452;
_Bool var_12 = (_Bool)0;
long long int var_13 = -1520415579449019701LL;
signed char var_14 = (signed char)1;
void init() {
}

void checksum() {
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
