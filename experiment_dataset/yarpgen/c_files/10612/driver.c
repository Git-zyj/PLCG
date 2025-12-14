#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1226190433U;
unsigned short var_1 = (unsigned short)17832;
_Bool var_2 = (_Bool)1;
unsigned char var_7 = (unsigned char)11;
int var_10 = -1267632770;
unsigned short var_11 = (unsigned short)11302;
long long int var_15 = 4954461030657419517LL;
int var_17 = -357724270;
int zero = 0;
signed char var_18 = (signed char)-117;
_Bool var_19 = (_Bool)1;
int var_20 = 40670728;
unsigned short var_21 = (unsigned short)13340;
int var_22 = -842060683;
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
