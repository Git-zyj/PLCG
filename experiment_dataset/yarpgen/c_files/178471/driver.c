#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6091366497849207990LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_11 = 5940887621829248417ULL;
_Bool var_12 = (_Bool)0;
int var_16 = 1602673274;
signed char var_17 = (signed char)70;
int var_19 = 1658490151;
int zero = 0;
long long int var_20 = 3218007991259021159LL;
unsigned char var_21 = (unsigned char)61;
long long int var_22 = -476386395567334200LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
