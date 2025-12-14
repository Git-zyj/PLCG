#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)159;
unsigned short var_6 = (unsigned short)10130;
int var_8 = 1587629173;
unsigned long long int var_9 = 14598053308974120635ULL;
_Bool var_10 = (_Bool)1;
unsigned int var_14 = 3242412460U;
int zero = 0;
short var_15 = (short)22307;
unsigned short var_16 = (unsigned short)15527;
short var_17 = (short)-7572;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
