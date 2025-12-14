#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-117;
signed char var_5 = (signed char)93;
short var_6 = (short)6536;
short var_7 = (short)20060;
unsigned char var_8 = (unsigned char)153;
unsigned int var_9 = 2710085860U;
unsigned char var_10 = (unsigned char)10;
unsigned int var_11 = 579779744U;
short var_13 = (short)26105;
long long int var_14 = 6786127562366186304LL;
int zero = 0;
int var_16 = 321388632;
unsigned long long int var_17 = 12310673402616572695ULL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 9458081984064146252ULL;
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
