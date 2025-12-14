#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1796529560;
unsigned long long int var_1 = 7309055434518515673ULL;
long long int var_2 = -714547076805151618LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_7 = 9436665669578940590ULL;
signed char var_9 = (signed char)-121;
unsigned char var_10 = (unsigned char)138;
unsigned char var_11 = (unsigned char)129;
unsigned short var_12 = (unsigned short)39630;
unsigned int var_13 = 4226384032U;
unsigned short var_14 = (unsigned short)46578;
long long int var_15 = 4078412482310054231LL;
int zero = 0;
unsigned int var_16 = 1395192215U;
long long int var_17 = 3052950739266133712LL;
unsigned int var_18 = 3146143291U;
long long int var_19 = 1584643854219823965LL;
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
