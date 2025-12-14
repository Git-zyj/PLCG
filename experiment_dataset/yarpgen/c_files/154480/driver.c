#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)10897;
unsigned short var_6 = (unsigned short)12835;
unsigned long long int var_9 = 9106643682557248938ULL;
unsigned long long int var_10 = 2449753560509254657ULL;
long long int var_12 = 6321750237152928351LL;
_Bool var_13 = (_Bool)0;
unsigned int var_15 = 917143335U;
int zero = 0;
unsigned char var_18 = (unsigned char)199;
int var_19 = -745542214;
void init() {
}

void checksum() {
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
