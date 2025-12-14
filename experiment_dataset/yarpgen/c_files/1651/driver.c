#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3374801524273947269LL;
_Bool var_4 = (_Bool)0;
int var_5 = 1795037407;
signed char var_7 = (signed char)-8;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-11376;
short var_10 = (short)26614;
short var_11 = (short)-31996;
int zero = 0;
short var_12 = (short)-32327;
short var_13 = (short)13451;
int var_14 = 254250226;
void init() {
}

void checksum() {
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
