#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1195529357064662292ULL;
unsigned short var_5 = (unsigned short)831;
unsigned int var_6 = 4162333880U;
unsigned long long int var_7 = 14798683460011607510ULL;
unsigned int var_8 = 3986883092U;
long long int var_9 = 4656001299199441691LL;
unsigned long long int var_10 = 6605109506497560800ULL;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)46;
signed char var_13 = (signed char)-101;
unsigned int var_15 = 3653338649U;
unsigned long long int var_16 = 12802712489098357871ULL;
int zero = 0;
signed char var_17 = (signed char)39;
long long int var_18 = -6317634264409776829LL;
unsigned short var_19 = (unsigned short)63307;
unsigned short var_20 = (unsigned short)8532;
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
