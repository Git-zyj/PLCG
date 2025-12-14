#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)37;
long long int var_4 = -809970925788790953LL;
long long int var_5 = -5654644346475795119LL;
unsigned short var_9 = (unsigned short)52900;
unsigned int var_11 = 1011669214U;
int var_12 = 1348243831;
unsigned char var_13 = (unsigned char)113;
short var_14 = (short)19167;
int zero = 0;
unsigned long long int var_16 = 758754422870954477ULL;
short var_17 = (short)32455;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
