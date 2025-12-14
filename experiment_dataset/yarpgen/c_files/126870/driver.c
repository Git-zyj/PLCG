#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9917;
int var_2 = 137314591;
unsigned short var_4 = (unsigned short)8084;
unsigned char var_5 = (unsigned char)168;
long long int var_7 = -128724787410800885LL;
unsigned int var_9 = 1692582262U;
short var_11 = (short)28104;
int zero = 0;
unsigned short var_16 = (unsigned short)7627;
_Bool var_17 = (_Bool)1;
long long int var_18 = 1979760278935324864LL;
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
