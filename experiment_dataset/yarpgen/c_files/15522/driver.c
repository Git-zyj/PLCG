#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6783843245002669499LL;
signed char var_2 = (signed char)11;
unsigned char var_8 = (unsigned char)180;
short var_10 = (short)-4480;
signed char var_13 = (signed char)103;
short var_14 = (short)-30945;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)23;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)246;
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
