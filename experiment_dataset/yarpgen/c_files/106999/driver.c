#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4198020362U;
long long int var_3 = -1171594886111271928LL;
unsigned int var_8 = 1388730061U;
unsigned char var_10 = (unsigned char)206;
unsigned long long int var_11 = 16706760347703425444ULL;
long long int var_12 = -7223706359863087860LL;
long long int var_19 = -1303233100833531094LL;
int zero = 0;
unsigned short var_20 = (unsigned short)43500;
unsigned short var_21 = (unsigned short)25032;
long long int var_22 = 4377253234281106663LL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
