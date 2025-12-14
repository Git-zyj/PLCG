#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5569955050643233333LL;
unsigned int var_2 = 839741118U;
long long int var_3 = 2521706054755516402LL;
short var_5 = (short)7222;
signed char var_6 = (signed char)-122;
long long int var_9 = 3047685510846090912LL;
unsigned long long int var_10 = 5523471699140900027ULL;
unsigned char var_11 = (unsigned char)156;
unsigned int var_13 = 213966141U;
int zero = 0;
short var_14 = (short)-27853;
signed char var_15 = (signed char)-127;
unsigned long long int var_16 = 15434098877965262503ULL;
unsigned short var_17 = (unsigned short)47480;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
