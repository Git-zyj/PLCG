#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)132;
unsigned long long int var_4 = 13263479974947314210ULL;
unsigned long long int var_5 = 9706708079326252610ULL;
unsigned short var_6 = (unsigned short)17054;
unsigned int var_9 = 2203621671U;
unsigned int var_11 = 988236652U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 1483048189U;
int var_17 = 1672547434;
unsigned long long int var_18 = 16199135898705970256ULL;
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
