#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31264;
int var_1 = 2065481215;
unsigned long long int var_2 = 16029375278502077772ULL;
short var_3 = (short)-8875;
unsigned long long int var_6 = 6161746098545246110ULL;
unsigned int var_7 = 2146160531U;
int var_8 = 730624787;
long long int var_9 = 8161294053511727657LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = 1167756687;
unsigned char var_13 = (unsigned char)105;
unsigned int var_14 = 3199476626U;
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
