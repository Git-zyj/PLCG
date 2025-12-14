#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-84;
signed char var_6 = (signed char)-118;
long long int var_7 = -7863109919191358135LL;
signed char var_8 = (signed char)-43;
int zero = 0;
signed char var_11 = (signed char)72;
long long int var_12 = -4230275935267507297LL;
void init() {
}

void checksum() {
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
