#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-111;
_Bool var_1 = (_Bool)1;
long long int var_2 = 1183983597079868795LL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)56;
int var_7 = 1708156605;
int zero = 0;
short var_10 = (short)-21481;
unsigned long long int var_11 = 540996892948323328ULL;
unsigned short var_12 = (unsigned short)61514;
signed char var_13 = (signed char)-47;
unsigned int var_14 = 1931353410U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
