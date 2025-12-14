#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
unsigned long long int var_4 = 15404562745500911842ULL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 5287290084545615885ULL;
int var_12 = 1428650591;
unsigned int var_13 = 3760656145U;
unsigned short var_15 = (unsigned short)20309;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)31859;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
