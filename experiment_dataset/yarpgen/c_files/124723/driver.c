#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5026429463555409375ULL;
long long int var_1 = 3571916426002660447LL;
unsigned char var_2 = (unsigned char)56;
unsigned long long int var_4 = 4790271649365460481ULL;
unsigned int var_6 = 1720689228U;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 15052885839779809209ULL;
signed char var_10 = (signed char)-97;
unsigned short var_11 = (unsigned short)42144;
int zero = 0;
long long int var_12 = -7299266992607925039LL;
unsigned int var_13 = 3268662464U;
unsigned char var_14 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
