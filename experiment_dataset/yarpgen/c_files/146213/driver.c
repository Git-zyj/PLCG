#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2911649389U;
int var_1 = 1291246844;
unsigned long long int var_2 = 14106953119728392709ULL;
unsigned short var_4 = (unsigned short)54717;
unsigned int var_7 = 1247904135U;
unsigned long long int var_9 = 6223800082109024420ULL;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)31696;
signed char var_13 = (signed char)59;
unsigned short var_14 = (unsigned short)65192;
int var_15 = 1798318297;
int zero = 0;
int var_16 = 1380672674;
short var_17 = (short)-13547;
unsigned short var_18 = (unsigned short)36105;
short var_19 = (short)-17384;
unsigned int var_20 = 1515521572U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
