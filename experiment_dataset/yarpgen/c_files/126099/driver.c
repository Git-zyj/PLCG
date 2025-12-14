#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4974;
int var_1 = -1779570591;
unsigned long long int var_2 = 16627959509336283218ULL;
_Bool var_7 = (_Bool)1;
short var_8 = (short)9470;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 9377856990477249699ULL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)71;
void init() {
}

void checksum() {
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
