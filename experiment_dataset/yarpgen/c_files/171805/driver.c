#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5438081785822250250LL;
unsigned long long int var_3 = 16931918049811039402ULL;
unsigned short var_4 = (unsigned short)23575;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)147;
unsigned char var_8 = (unsigned char)172;
unsigned short var_9 = (unsigned short)48092;
signed char var_10 = (signed char)19;
unsigned char var_12 = (unsigned char)112;
unsigned short var_13 = (unsigned short)27172;
unsigned int var_14 = 2338880955U;
unsigned int var_15 = 958312668U;
unsigned int var_17 = 2120071283U;
int zero = 0;
long long int var_18 = 289122906685597386LL;
unsigned short var_19 = (unsigned short)27322;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)8705;
unsigned short var_22 = (unsigned short)38954;
unsigned char var_23 = (unsigned char)175;
long long int var_24 = 6048971308688074876LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
