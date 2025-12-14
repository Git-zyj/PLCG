#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6410982532367684116LL;
unsigned char var_1 = (unsigned char)115;
signed char var_2 = (signed char)-116;
signed char var_3 = (signed char)-95;
signed char var_4 = (signed char)31;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-51;
unsigned long long int var_8 = 14516556664266271786ULL;
unsigned char var_9 = (unsigned char)237;
unsigned long long int var_10 = 15094677948704472749ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = -6235088791937201692LL;
unsigned short var_13 = (unsigned short)43554;
unsigned char var_14 = (unsigned char)110;
unsigned long long int var_15 = 1785048742104030429ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
