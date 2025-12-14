#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-114;
int var_2 = -121018840;
signed char var_3 = (signed char)-117;
_Bool var_5 = (_Bool)1;
long long int var_6 = 7362303227844170878LL;
unsigned int var_7 = 954246923U;
short var_9 = (short)-2147;
unsigned long long int var_10 = 14098947056028592324ULL;
unsigned char var_12 = (unsigned char)22;
long long int var_15 = 4752859757211375360LL;
int zero = 0;
long long int var_16 = 8319110707233032726LL;
unsigned long long int var_17 = 8293309659770561970ULL;
unsigned int var_18 = 3735791683U;
void init() {
}

void checksum() {
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
