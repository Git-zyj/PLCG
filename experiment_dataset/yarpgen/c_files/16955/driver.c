#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33804;
signed char var_1 = (signed char)15;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 761959204U;
long long int var_4 = -7668601695839866487LL;
unsigned short var_5 = (unsigned short)23748;
unsigned char var_6 = (unsigned char)255;
signed char var_7 = (signed char)-44;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)237;
long long int var_10 = -7137487161570880001LL;
long long int var_11 = 8474039381690055124LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 1511971137U;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)31936;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
