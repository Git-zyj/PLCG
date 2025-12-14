#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2674106732U;
unsigned int var_3 = 2610109649U;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
int var_8 = 59750138;
signed char var_9 = (signed char)7;
long long int var_11 = -5897569389585952638LL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)53;
int var_14 = -1532002878;
int zero = 0;
signed char var_15 = (signed char)-48;
long long int var_16 = -5962326717819131171LL;
unsigned short var_17 = (unsigned short)15798;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
