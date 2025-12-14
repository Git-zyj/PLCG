#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)167;
unsigned long long int var_2 = 1103350780197727279ULL;
unsigned long long int var_3 = 14056244330227124306ULL;
unsigned int var_4 = 1136602475U;
long long int var_5 = -6470473628115208294LL;
unsigned char var_6 = (unsigned char)53;
unsigned char var_7 = (unsigned char)199;
unsigned int var_8 = 808032278U;
short var_13 = (short)-8505;
unsigned int var_15 = 3991359996U;
unsigned short var_17 = (unsigned short)31634;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -7813956660215821777LL;
void init() {
}

void checksum() {
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
