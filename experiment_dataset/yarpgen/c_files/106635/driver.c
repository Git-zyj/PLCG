#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 219164685;
signed char var_6 = (signed char)52;
unsigned char var_8 = (unsigned char)217;
unsigned short var_9 = (unsigned short)62064;
int var_13 = -1916743942;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 1970871652984482858ULL;
unsigned char var_19 = (unsigned char)141;
unsigned char var_20 = (unsigned char)125;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
