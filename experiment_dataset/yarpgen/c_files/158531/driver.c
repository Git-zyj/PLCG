#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10602;
unsigned int var_3 = 3416560901U;
unsigned long long int var_4 = 4747281376628072875ULL;
_Bool var_5 = (_Bool)1;
long long int var_6 = 683322865679638529LL;
signed char var_7 = (signed char)7;
unsigned short var_9 = (unsigned short)9408;
unsigned long long int var_10 = 4866836947014433558ULL;
unsigned int var_11 = 180812173U;
int zero = 0;
unsigned int var_12 = 2517089392U;
unsigned int var_13 = 3758458491U;
int var_14 = -1125758546;
unsigned int var_15 = 924339022U;
short var_16 = (short)-22932;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
