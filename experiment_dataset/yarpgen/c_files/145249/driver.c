#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)24;
signed char var_6 = (signed char)-79;
unsigned short var_8 = (unsigned short)2494;
unsigned int var_9 = 3913862626U;
signed char var_10 = (signed char)23;
unsigned char var_14 = (unsigned char)177;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 485441480U;
_Bool var_17 = (_Bool)1;
long long int var_18 = -1478375536585654869LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
