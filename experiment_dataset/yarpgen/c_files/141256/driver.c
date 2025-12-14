#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17421;
unsigned short var_2 = (unsigned short)62744;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)46347;
int var_7 = -1275193843;
int zero = 0;
int var_11 = -336977582;
short var_12 = (short)-32126;
int var_13 = 816794669;
long long int var_14 = 6298438007263497901LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
