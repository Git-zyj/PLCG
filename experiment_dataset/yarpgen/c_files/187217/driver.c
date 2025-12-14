#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 130528412325277615ULL;
int var_10 = 391640349;
_Bool var_13 = (_Bool)0;
long long int var_14 = 1828595139322085619LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 5090119615970859804ULL;
unsigned long long int var_19 = 9126668817295406391ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
