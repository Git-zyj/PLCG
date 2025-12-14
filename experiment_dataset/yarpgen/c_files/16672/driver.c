#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)93;
short var_2 = (short)24319;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 2368359426610945523ULL;
unsigned short var_7 = (unsigned short)14514;
unsigned short var_8 = (unsigned short)41832;
unsigned long long int var_9 = 16148390936986278082ULL;
unsigned short var_12 = (unsigned short)29257;
unsigned char var_15 = (unsigned char)123;
int zero = 0;
short var_17 = (short)-23299;
long long int var_18 = 8213183583214344013LL;
signed char var_19 = (signed char)85;
void init() {
}

void checksum() {
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
