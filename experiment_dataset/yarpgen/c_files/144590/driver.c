#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 800141908U;
signed char var_4 = (signed char)115;
unsigned int var_6 = 1790682624U;
int var_8 = 24313405;
unsigned int var_9 = 3714521398U;
int zero = 0;
unsigned int var_12 = 4039812452U;
short var_13 = (short)3572;
void init() {
}

void checksum() {
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
