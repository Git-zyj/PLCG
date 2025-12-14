#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -1019080493072665102LL;
unsigned long long int var_6 = 4236949983439156483ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_19 = -8142474536523033006LL;
signed char var_20 = (signed char)66;
void init() {
}

void checksum() {
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
