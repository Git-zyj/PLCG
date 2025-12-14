#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20354;
long long int var_1 = 2366309688869798101LL;
unsigned char var_6 = (unsigned char)144;
signed char var_7 = (signed char)-3;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 1899507833U;
unsigned int var_17 = 3562329501U;
int zero = 0;
unsigned long long int var_18 = 7385228801421775026ULL;
unsigned short var_19 = (unsigned short)37120;
signed char var_20 = (signed char)94;
unsigned long long int var_21 = 3896084806836266288ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
