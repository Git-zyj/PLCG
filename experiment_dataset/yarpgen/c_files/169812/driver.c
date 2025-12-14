#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 427072546U;
unsigned long long int var_2 = 520559394341362556ULL;
unsigned long long int var_3 = 11805723426262036507ULL;
unsigned int var_7 = 1988463772U;
unsigned short var_9 = (unsigned short)55417;
int var_12 = -679982684;
unsigned long long int var_15 = 15403395660317051955ULL;
unsigned int var_17 = 3544869080U;
unsigned long long int var_18 = 10962717677876625944ULL;
int zero = 0;
unsigned int var_19 = 3543531707U;
unsigned short var_20 = (unsigned short)19891;
unsigned long long int var_21 = 860149574256375790ULL;
unsigned long long int var_22 = 5999236337138849485ULL;
void init() {
}

void checksum() {
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
