#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -197063599;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)60018;
unsigned short var_4 = (unsigned short)1284;
unsigned short var_7 = (unsigned short)62939;
_Bool var_8 = (_Bool)0;
long long int var_10 = -5574847696476806770LL;
short var_13 = (short)-9671;
long long int var_15 = 5796738116309922761LL;
int zero = 0;
unsigned char var_18 = (unsigned char)71;
unsigned short var_19 = (unsigned short)9691;
long long int var_20 = -1168461137281465234LL;
short var_21 = (short)9788;
void init() {
}

void checksum() {
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
