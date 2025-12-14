#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-23;
unsigned short var_1 = (unsigned short)55878;
unsigned long long int var_2 = 15250461481083991044ULL;
unsigned char var_4 = (unsigned char)49;
short var_5 = (short)-13698;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 1213826295041209901ULL;
unsigned char var_10 = (unsigned char)189;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)220;
int zero = 0;
unsigned long long int var_16 = 988416635566297523ULL;
_Bool var_17 = (_Bool)0;
long long int var_18 = 7351210830821294408LL;
unsigned short var_19 = (unsigned short)57333;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
