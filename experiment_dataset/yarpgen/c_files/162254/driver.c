#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -867152691464244328LL;
unsigned short var_2 = (unsigned short)26580;
short var_4 = (short)3856;
signed char var_5 = (signed char)-24;
int var_6 = -142574992;
int var_8 = 182857099;
short var_9 = (short)-1900;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 6416868449868184337LL;
void init() {
}

void checksum() {
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
