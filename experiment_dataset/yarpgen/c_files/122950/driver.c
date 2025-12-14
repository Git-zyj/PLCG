#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4122860292164156206LL;
int var_6 = 1548267986;
long long int var_7 = -2943415680288584881LL;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)91;
int zero = 0;
signed char var_14 = (signed char)-69;
long long int var_15 = -1265464369420702651LL;
unsigned int var_16 = 2922372737U;
void init() {
}

void checksum() {
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
