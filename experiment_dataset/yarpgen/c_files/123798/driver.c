#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)189;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)83;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 1227242861108623169ULL;
int var_13 = -1231681906;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 4075390988961919679ULL;
unsigned short var_17 = (unsigned short)49723;
unsigned char var_18 = (unsigned char)162;
unsigned long long int var_19 = 7386755171057218196ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
