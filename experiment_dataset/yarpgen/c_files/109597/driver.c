#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3197369283U;
unsigned long long int var_1 = 5088384917537846130ULL;
unsigned char var_2 = (unsigned char)118;
long long int var_3 = 5366914395960344209LL;
unsigned int var_4 = 3763125819U;
unsigned long long int var_7 = 14896768402528626969ULL;
short var_8 = (short)30891;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)225;
int var_11 = -940331442;
unsigned int var_12 = 1868330798U;
unsigned char var_13 = (unsigned char)17;
unsigned long long int var_14 = 2004782961430117367ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
