#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -208524775;
unsigned short var_3 = (unsigned short)4863;
unsigned short var_8 = (unsigned short)62615;
long long int var_9 = -6603818086019758368LL;
signed char var_10 = (signed char)-112;
short var_12 = (short)-26027;
short var_13 = (short)-17069;
unsigned int var_16 = 2919609392U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2666605168U;
unsigned short var_19 = (unsigned short)14673;
unsigned int var_20 = 3346442826U;
unsigned int var_21 = 1772211081U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
