#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
unsigned int var_1 = 280811488U;
unsigned int var_2 = 499469231U;
unsigned long long int var_3 = 4367435542102465705ULL;
unsigned short var_5 = (unsigned short)6403;
int var_7 = -1045880675;
unsigned int var_8 = 1695760818U;
unsigned int var_9 = 712125391U;
int var_10 = 1315126156;
int var_13 = 1216988000;
unsigned short var_14 = (unsigned short)63211;
int zero = 0;
long long int var_15 = 3089474746069164996LL;
int var_16 = 1960281375;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
