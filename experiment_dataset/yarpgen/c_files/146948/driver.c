#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1883760651U;
unsigned char var_2 = (unsigned char)71;
unsigned char var_3 = (unsigned char)44;
int var_4 = -630456918;
_Bool var_5 = (_Bool)1;
long long int var_6 = 4753951131855236017LL;
unsigned char var_9 = (unsigned char)87;
unsigned long long int var_10 = 15046030188601324908ULL;
unsigned short var_11 = (unsigned short)28082;
long long int var_15 = -1187799616432940102LL;
int zero = 0;
int var_16 = -60008405;
unsigned long long int var_17 = 12354127019817440375ULL;
short var_18 = (short)21251;
void init() {
}

void checksum() {
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
