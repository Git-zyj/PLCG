#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51903;
short var_3 = (short)29191;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 7002154250131956786ULL;
short var_11 = (short)-3382;
int var_14 = 335347905;
int zero = 0;
unsigned short var_15 = (unsigned short)63806;
unsigned long long int var_16 = 7769758755648443817ULL;
unsigned long long int var_17 = 6967781231215808351ULL;
unsigned long long int var_18 = 15942932253898869147ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
