#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)99;
short var_1 = (short)32732;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)103;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)11;
unsigned short var_8 = (unsigned short)41874;
unsigned short var_9 = (unsigned short)19892;
unsigned long long int var_10 = 13868528885961313972ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)217;
unsigned char var_16 = (unsigned char)95;
unsigned char var_17 = (unsigned char)211;
long long int var_18 = -3309341778528627440LL;
_Bool var_19 = (_Bool)0;
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
