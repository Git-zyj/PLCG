#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8556101400099226733LL;
int var_4 = 1406034213;
unsigned short var_6 = (unsigned short)64212;
unsigned short var_11 = (unsigned short)36742;
int var_19 = 328468466;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)61;
unsigned char var_22 = (unsigned char)133;
unsigned long long int var_23 = 9829826617284754984ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
