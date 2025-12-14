#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 17045700056874816016ULL;
long long int var_3 = 157085572058245362LL;
long long int var_5 = 8897059661469983603LL;
long long int var_6 = 7848336624945251032LL;
int var_7 = -2114115452;
unsigned int var_10 = 2405233303U;
unsigned short var_11 = (unsigned short)48853;
long long int var_12 = 5636052054763100715LL;
long long int var_14 = -2793754846562593408LL;
int var_15 = -1899347818;
long long int var_16 = 5655452838368499181LL;
short var_17 = (short)-13823;
long long int var_18 = -7171377646026679605LL;
long long int var_19 = 7268842304687045903LL;
int zero = 0;
int var_20 = -250101097;
long long int var_21 = -6493655235671092375LL;
int var_22 = 1666522933;
short var_23 = (short)-17853;
long long int var_24 = 4788143823023457393LL;
long long int var_25 = 3583711573976221999LL;
int var_26 = 922511271;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
