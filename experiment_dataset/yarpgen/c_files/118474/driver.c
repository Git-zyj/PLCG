#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13365;
unsigned short var_1 = (unsigned short)42574;
long long int var_3 = 5056501269884596336LL;
unsigned char var_6 = (unsigned char)97;
long long int var_7 = -373144189520566834LL;
_Bool var_9 = (_Bool)1;
long long int var_12 = 8532039093084205759LL;
unsigned char var_13 = (unsigned char)83;
unsigned char var_14 = (unsigned char)217;
int zero = 0;
unsigned char var_17 = (unsigned char)192;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
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
