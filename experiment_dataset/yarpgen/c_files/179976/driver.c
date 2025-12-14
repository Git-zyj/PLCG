#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1099537318143566219LL;
short var_1 = (short)31482;
short var_2 = (short)-27268;
short var_3 = (short)6014;
long long int var_5 = -1731512081254711507LL;
long long int var_6 = 9117844193912544777LL;
signed char var_7 = (signed char)-120;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)62622;
unsigned short var_11 = (unsigned short)10484;
short var_12 = (short)-23813;
int var_15 = 733669900;
int zero = 0;
unsigned char var_16 = (unsigned char)160;
long long int var_17 = 6785649930677295798LL;
_Bool var_18 = (_Bool)0;
long long int var_19 = -4205374831301842447LL;
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
