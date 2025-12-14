#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2811;
long long int var_1 = -5564105766040624717LL;
long long int var_5 = 8859622526203629560LL;
signed char var_6 = (signed char)74;
_Bool var_7 = (_Bool)1;
unsigned long long int var_11 = 276110023789520352ULL;
unsigned int var_12 = 1084911291U;
long long int var_15 = 6580401774333091909LL;
int zero = 0;
short var_16 = (short)3740;
unsigned char var_17 = (unsigned char)225;
unsigned long long int var_18 = 11707998046364714886ULL;
unsigned int var_19 = 838521344U;
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
