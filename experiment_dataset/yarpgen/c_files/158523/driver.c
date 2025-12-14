#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-24055;
short var_3 = (short)25055;
unsigned long long int var_5 = 14203766999973708406ULL;
long long int var_11 = -1259386707936271354LL;
int zero = 0;
unsigned long long int var_13 = 14158129493702584418ULL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
