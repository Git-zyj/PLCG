#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-69;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)25753;
unsigned long long int var_6 = 6997644406580436467ULL;
unsigned int var_8 = 2386210515U;
long long int var_9 = 1115848973600844192LL;
int zero = 0;
unsigned long long int var_11 = 3624301355588576771ULL;
unsigned long long int var_12 = 170920268482801107ULL;
unsigned long long int var_13 = 12363412617409039345ULL;
_Bool var_14 = (_Bool)0;
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
