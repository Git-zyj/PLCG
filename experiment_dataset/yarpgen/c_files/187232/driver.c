#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2068374896U;
int var_3 = -196900639;
long long int var_4 = -784094540066547411LL;
_Bool var_5 = (_Bool)1;
long long int var_10 = 4968105908971684893LL;
short var_13 = (short)19327;
int zero = 0;
unsigned long long int var_15 = 15493260982766649853ULL;
_Bool var_16 = (_Bool)0;
int var_17 = 1523532572;
unsigned int var_18 = 1612221925U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
