#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19927;
signed char var_4 = (signed char)-11;
short var_8 = (short)-30789;
long long int var_9 = -977584279825629872LL;
short var_11 = (short)13575;
int zero = 0;
short var_13 = (short)-32018;
short var_14 = (short)11216;
short var_15 = (short)-3699;
long long int var_16 = -1330847627349987002LL;
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
