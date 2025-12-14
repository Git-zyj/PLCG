#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49526;
unsigned short var_5 = (unsigned short)28130;
unsigned short var_6 = (unsigned short)35914;
short var_7 = (short)12415;
signed char var_8 = (signed char)53;
long long int var_9 = 4831484630883405076LL;
signed char var_10 = (signed char)-91;
long long int var_15 = -5402625617918114686LL;
short var_16 = (short)-1386;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)39856;
unsigned short var_19 = (unsigned short)58992;
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
