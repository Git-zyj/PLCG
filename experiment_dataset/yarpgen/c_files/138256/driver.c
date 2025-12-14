#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 5628305946612399194ULL;
signed char var_6 = (signed char)82;
unsigned short var_7 = (unsigned short)60143;
unsigned long long int var_8 = 3578368934118457539ULL;
int zero = 0;
signed char var_10 = (signed char)69;
long long int var_11 = -3298727800739975717LL;
unsigned short var_12 = (unsigned short)38633;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
