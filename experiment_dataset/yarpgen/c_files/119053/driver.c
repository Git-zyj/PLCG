#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3809187475U;
int var_3 = 965446043;
_Bool var_5 = (_Bool)0;
int var_6 = -726676815;
int var_8 = 87607461;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 8835652287754108697ULL;
unsigned long long int var_13 = 16173460007521854514ULL;
int var_14 = 2114754890;
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
