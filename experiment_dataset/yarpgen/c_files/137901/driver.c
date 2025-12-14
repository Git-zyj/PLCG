#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2681392374401134961LL;
unsigned char var_2 = (unsigned char)25;
long long int var_3 = 6928038256079765302LL;
int var_5 = -151076218;
_Bool var_6 = (_Bool)0;
long long int var_7 = 5239243225027136760LL;
int zero = 0;
long long int var_10 = 3456579370370457428LL;
unsigned int var_11 = 1027238785U;
unsigned int var_12 = 3318232398U;
unsigned int var_13 = 821706029U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
