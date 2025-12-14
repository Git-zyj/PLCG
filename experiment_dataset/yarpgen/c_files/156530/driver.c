#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7508708335834744772LL;
unsigned short var_1 = (unsigned short)21884;
long long int var_2 = 4563832802443419518LL;
signed char var_3 = (signed char)77;
unsigned long long int var_4 = 18332087836788960671ULL;
short var_5 = (short)-12357;
unsigned char var_6 = (unsigned char)213;
short var_9 = (short)-7707;
short var_10 = (short)17352;
unsigned long long int var_12 = 4783924451765468865ULL;
unsigned long long int var_13 = 8386178327847656428ULL;
int zero = 0;
unsigned int var_14 = 2457443351U;
unsigned short var_15 = (unsigned short)19910;
int var_16 = 1738327506;
unsigned char var_17 = (unsigned char)219;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
