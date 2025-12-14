#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5377;
signed char var_1 = (signed char)-98;
short var_2 = (short)-19303;
unsigned int var_3 = 1509078045U;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 3415641732U;
short var_10 = (short)-29936;
int zero = 0;
long long int var_12 = 4529077889993962480LL;
unsigned long long int var_13 = 11476797278237303159ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
