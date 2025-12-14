#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)64441;
unsigned short var_4 = (unsigned short)131;
short var_5 = (short)6411;
unsigned short var_8 = (unsigned short)25958;
unsigned short var_9 = (unsigned short)11992;
unsigned long long int var_10 = 6826631023547289731ULL;
_Bool var_12 = (_Bool)1;
int var_13 = -359970574;
int zero = 0;
unsigned int var_17 = 881344827U;
unsigned short var_18 = (unsigned short)4748;
unsigned char var_19 = (unsigned char)12;
unsigned short var_20 = (unsigned short)59205;
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
