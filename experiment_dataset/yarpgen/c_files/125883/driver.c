#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7994313798442689122LL;
long long int var_1 = 5063078955468413556LL;
unsigned int var_4 = 4235368445U;
unsigned char var_5 = (unsigned char)66;
unsigned char var_6 = (unsigned char)184;
unsigned long long int var_7 = 13628242241162382804ULL;
long long int var_8 = 8410814984634799232LL;
long long int var_9 = -8098591174793125326LL;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)95;
int zero = 0;
signed char var_15 = (signed char)127;
unsigned int var_16 = 2188633368U;
unsigned short var_17 = (unsigned short)10748;
unsigned long long int var_18 = 17314600094974820084ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
