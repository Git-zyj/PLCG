#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-122;
signed char var_4 = (signed char)80;
unsigned long long int var_5 = 7912413623823963018ULL;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)118;
unsigned long long int var_9 = 787066975981240713ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)116;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 8617988901748019061ULL;
signed char var_14 = (signed char)70;
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
