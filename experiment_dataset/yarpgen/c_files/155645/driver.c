#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)52;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 7466735482351481005ULL;
unsigned long long int var_10 = 4221318112188035802ULL;
short var_11 = (short)-1459;
short var_15 = (short)-1176;
int zero = 0;
unsigned long long int var_16 = 17128640001760866121ULL;
_Bool var_17 = (_Bool)0;
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
