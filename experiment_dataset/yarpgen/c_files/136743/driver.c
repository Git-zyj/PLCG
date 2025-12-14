#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)167;
int var_2 = -692497044;
int var_5 = -222270745;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-38;
unsigned short var_14 = (unsigned short)36353;
long long int var_15 = -4047259462585900381LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
