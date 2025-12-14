#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-103;
int var_1 = -1998401297;
unsigned short var_2 = (unsigned short)13134;
unsigned int var_3 = 3218568795U;
long long int var_5 = 2399277515700953268LL;
unsigned int var_6 = 2249467025U;
_Bool var_7 = (_Bool)0;
long long int var_8 = 3898467107237509770LL;
unsigned int var_10 = 667319749U;
unsigned int var_14 = 214852545U;
int zero = 0;
short var_15 = (short)-10731;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)81;
signed char var_18 = (signed char)71;
unsigned long long int var_19 = 3108513896524767091ULL;
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
