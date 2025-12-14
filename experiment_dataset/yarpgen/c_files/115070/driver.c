#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)65;
unsigned char var_2 = (unsigned char)86;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)8521;
unsigned short var_5 = (unsigned short)3825;
short var_7 = (short)-25557;
unsigned short var_8 = (unsigned short)36058;
short var_9 = (short)-10395;
long long int var_10 = -2635160770857613931LL;
int var_12 = 1637811121;
unsigned long long int var_13 = 17010353564904399042ULL;
unsigned long long int var_14 = 17342939177027378776ULL;
unsigned int var_16 = 1572932307U;
int zero = 0;
unsigned char var_17 = (unsigned char)205;
int var_18 = -1580027808;
short var_19 = (short)-24984;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
