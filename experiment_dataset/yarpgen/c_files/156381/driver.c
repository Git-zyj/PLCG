#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 702742067;
unsigned short var_2 = (unsigned short)39825;
unsigned short var_4 = (unsigned short)57400;
int var_6 = -1803136872;
int var_7 = 757865954;
unsigned long long int var_9 = 11259313462869218085ULL;
unsigned long long int var_10 = 15479247544416217588ULL;
unsigned long long int var_14 = 2902575981662899612ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 3736095605873441339ULL;
unsigned long long int var_18 = 5800767590201950054ULL;
short var_19 = (short)-18344;
unsigned int var_20 = 18608927U;
short var_21 = (short)20821;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-15528;
unsigned char var_24 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
