#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1012682717;
short var_4 = (short)25090;
int var_8 = 776834589;
long long int var_9 = 463515812482185753LL;
short var_10 = (short)-22414;
signed char var_11 = (signed char)-65;
signed char var_12 = (signed char)-107;
int var_14 = 944556584;
unsigned short var_16 = (unsigned short)25657;
signed char var_17 = (signed char)90;
int zero = 0;
signed char var_18 = (signed char)30;
unsigned char var_19 = (unsigned char)219;
int var_20 = 1102842517;
unsigned short var_21 = (unsigned short)29309;
short var_22 = (short)-25576;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
