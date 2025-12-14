#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9227608837495124296ULL;
unsigned int var_2 = 895628212U;
signed char var_3 = (signed char)-68;
unsigned long long int var_4 = 9191791394169593322ULL;
_Bool var_5 = (_Bool)1;
int var_6 = -1278850175;
unsigned char var_9 = (unsigned char)235;
long long int var_10 = 3251667526654787759LL;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)126;
short var_15 = (short)2521;
unsigned long long int var_16 = 4907654205088175951ULL;
unsigned short var_17 = (unsigned short)60883;
int var_18 = -1181015025;
int zero = 0;
short var_20 = (short)8481;
unsigned char var_21 = (unsigned char)86;
unsigned short var_22 = (unsigned short)13946;
unsigned short var_23 = (unsigned short)64748;
void init() {
}

void checksum() {
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
