#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -422915291;
long long int var_3 = 6676077348131646153LL;
long long int var_4 = -7469134973977125535LL;
signed char var_7 = (signed char)46;
unsigned long long int var_10 = 5438149261586993142ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = 7827185794159755450LL;
long long int var_15 = 6194085339488473411LL;
void init() {
}

void checksum() {
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
