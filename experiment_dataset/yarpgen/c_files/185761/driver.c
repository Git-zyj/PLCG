#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4255668713U;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-7967;
unsigned short var_4 = (unsigned short)9853;
unsigned long long int var_6 = 4510806184266073869ULL;
_Bool var_7 = (_Bool)1;
short var_9 = (short)-22435;
int zero = 0;
signed char var_10 = (signed char)-65;
short var_11 = (short)21005;
unsigned int var_12 = 1500628961U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
