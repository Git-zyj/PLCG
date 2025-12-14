#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)115;
unsigned char var_5 = (unsigned char)221;
short var_14 = (short)31401;
long long int var_15 = 8401850258184686500LL;
short var_16 = (short)22620;
unsigned long long int var_17 = 11652170159698313500ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = -896738916;
unsigned short var_20 = (unsigned short)59074;
unsigned char var_21 = (unsigned char)199;
unsigned short var_22 = (unsigned short)23441;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
