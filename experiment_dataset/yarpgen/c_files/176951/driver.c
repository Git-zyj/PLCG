#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55589;
unsigned char var_1 = (unsigned char)154;
unsigned long long int var_4 = 5007154994981616626ULL;
int var_5 = 521806522;
long long int var_8 = 2161378104019702619LL;
unsigned long long int var_9 = 16010015029662373034ULL;
int var_10 = 1479750007;
signed char var_11 = (signed char)65;
unsigned short var_12 = (unsigned short)3035;
unsigned int var_14 = 140806621U;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -903930664;
unsigned int var_18 = 3826033035U;
unsigned char var_19 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
