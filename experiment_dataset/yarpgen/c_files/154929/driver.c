#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)25;
unsigned long long int var_3 = 5165543443483727482ULL;
unsigned short var_4 = (unsigned short)56216;
short var_5 = (short)-13886;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
short var_11 = (short)-9697;
unsigned char var_15 = (unsigned char)2;
_Bool var_16 = (_Bool)0;
long long int var_17 = -7319307734333476316LL;
int zero = 0;
unsigned short var_18 = (unsigned short)52264;
_Bool var_19 = (_Bool)0;
long long int var_20 = -7861892153083024132LL;
void init() {
}

void checksum() {
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
