#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)31322;
int var_6 = -40734028;
long long int var_8 = -3084026754126728946LL;
_Bool var_11 = (_Bool)1;
signed char var_14 = (signed char)116;
signed char var_15 = (signed char)-106;
int zero = 0;
unsigned short var_16 = (unsigned short)27779;
unsigned short var_17 = (unsigned short)12477;
int var_18 = -481894387;
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
