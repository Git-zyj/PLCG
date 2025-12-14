#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1925542025U;
short var_1 = (short)16092;
short var_2 = (short)22449;
signed char var_3 = (signed char)-125;
long long int var_4 = -7271886114339222207LL;
unsigned long long int var_5 = 6900577799068116710ULL;
unsigned long long int var_6 = 7719709375834020507ULL;
short var_7 = (short)15728;
signed char var_8 = (signed char)-37;
long long int var_9 = 2621317169492469013LL;
unsigned long long int var_10 = 17532870858791207705ULL;
long long int var_12 = 2954243919386470123LL;
short var_13 = (short)25995;
unsigned short var_14 = (unsigned short)34583;
long long int var_15 = 1149326093138223348LL;
unsigned char var_16 = (unsigned char)253;
unsigned int var_17 = 1969392459U;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)103;
int var_20 = -683411967;
unsigned long long int var_21 = 15171402436784448616ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
