#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1883626278U;
signed char var_3 = (signed char)-77;
unsigned short var_4 = (unsigned short)12412;
int var_7 = 1391187389;
unsigned char var_8 = (unsigned char)170;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2798849523U;
int zero = 0;
signed char var_15 = (signed char)121;
signed char var_16 = (signed char)-111;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)73;
unsigned short var_19 = (unsigned short)43256;
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
