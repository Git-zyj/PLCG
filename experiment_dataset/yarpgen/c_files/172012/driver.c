#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)106;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-31764;
unsigned short var_7 = (unsigned short)45742;
unsigned int var_9 = 502122018U;
unsigned long long int var_11 = 5923743494038396364ULL;
signed char var_13 = (signed char)11;
int zero = 0;
int var_14 = -692358201;
long long int var_15 = 5104611085609000560LL;
short var_16 = (short)-6719;
void init() {
}

void checksum() {
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
