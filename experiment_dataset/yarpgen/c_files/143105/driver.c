#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-12;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)25;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 4015063981U;
unsigned int var_10 = 2811867096U;
unsigned int var_13 = 2667986601U;
short var_14 = (short)-4683;
unsigned int var_16 = 3785253626U;
int zero = 0;
long long int var_17 = 2750415119764029063LL;
signed char var_18 = (signed char)-5;
unsigned int var_19 = 3300460626U;
unsigned char var_20 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
