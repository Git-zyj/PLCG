#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2030067898;
unsigned char var_7 = (unsigned char)176;
unsigned long long int var_9 = 6019836199390716964ULL;
int var_11 = -1439186990;
unsigned short var_12 = (unsigned short)37986;
_Bool var_14 = (_Bool)0;
unsigned short var_17 = (unsigned short)50609;
int zero = 0;
unsigned int var_20 = 323733379U;
unsigned long long int var_21 = 14226425279318625962ULL;
long long int var_22 = -3762536442535885949LL;
unsigned char var_23 = (unsigned char)168;
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
