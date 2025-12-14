#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1091045836746552768LL;
unsigned char var_1 = (unsigned char)193;
long long int var_3 = -8025958829101564633LL;
unsigned short var_6 = (unsigned short)54725;
int var_7 = -1132296441;
unsigned short var_8 = (unsigned short)5006;
unsigned int var_10 = 2726041758U;
short var_11 = (short)-18530;
signed char var_12 = (signed char)-49;
long long int var_13 = 2028167461873013819LL;
unsigned int var_14 = 3029533607U;
unsigned long long int var_15 = 10344531009152966958ULL;
unsigned short var_16 = (unsigned short)35335;
short var_17 = (short)22865;
int zero = 0;
unsigned short var_19 = (unsigned short)57216;
signed char var_20 = (signed char)118;
unsigned short var_21 = (unsigned short)22495;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)51315;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
