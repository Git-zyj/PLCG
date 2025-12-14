#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38686;
int var_1 = -1448577682;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-23062;
unsigned long long int var_4 = 15020437922348004445ULL;
int var_5 = 1400886059;
short var_9 = (short)4626;
long long int var_11 = -7981435401264247957LL;
signed char var_18 = (signed char)127;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 2606821388375855896ULL;
long long int var_21 = -1742634310534845845LL;
long long int var_22 = 6649346050170356060LL;
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
