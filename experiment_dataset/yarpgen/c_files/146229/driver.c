#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4612781505343279220LL;
unsigned short var_1 = (unsigned short)38359;
int var_4 = 1380589003;
int var_5 = 1096619391;
short var_6 = (short)-6464;
int var_7 = -1302836876;
_Bool var_8 = (_Bool)0;
int var_10 = -1998071118;
int zero = 0;
unsigned char var_12 = (unsigned char)214;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
