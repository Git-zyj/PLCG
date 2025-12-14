#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -434470433;
int var_1 = 175507191;
int var_3 = -689549479;
_Bool var_7 = (_Bool)0;
int zero = 0;
short var_10 = (short)-12759;
long long int var_11 = -8336957306827568832LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
