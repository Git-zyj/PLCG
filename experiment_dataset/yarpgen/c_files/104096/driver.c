#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29117;
unsigned long long int var_1 = 17096550775331566107ULL;
_Bool var_8 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_18 = -1884637895;
unsigned char var_19 = (unsigned char)95;
unsigned short var_20 = (unsigned short)16794;
void init() {
}

void checksum() {
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
