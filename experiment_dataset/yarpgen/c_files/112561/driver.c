#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7562;
_Bool var_2 = (_Bool)1;
short var_5 = (short)26616;
unsigned long long int var_6 = 8632406477192861785ULL;
short var_9 = (short)-457;
unsigned short var_10 = (unsigned short)7228;
unsigned short var_14 = (unsigned short)10184;
unsigned long long int var_15 = 6781577586027167349ULL;
int zero = 0;
unsigned long long int var_16 = 14635590229944908811ULL;
unsigned long long int var_17 = 7088494176816956854ULL;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)253;
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
