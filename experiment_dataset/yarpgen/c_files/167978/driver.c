#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -852055014;
_Bool var_4 = (_Bool)0;
int var_5 = 237666334;
long long int var_6 = 2405729578306762791LL;
unsigned short var_7 = (unsigned short)48554;
signed char var_8 = (signed char)-101;
int var_9 = -59025684;
long long int var_10 = -7219385441804854948LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 8293911269530968874LL;
unsigned int var_15 = 500446615U;
unsigned char var_16 = (unsigned char)104;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
