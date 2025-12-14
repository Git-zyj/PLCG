#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)233;
int var_2 = 36559095;
signed char var_11 = (signed char)34;
_Bool var_12 = (_Bool)0;
long long int var_15 = 2426407647634072205LL;
int zero = 0;
unsigned char var_19 = (unsigned char)170;
int var_20 = -683827930;
int var_21 = -1471564286;
int var_22 = 650057220;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
