#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1159240264942639041LL;
unsigned short var_5 = (unsigned short)40298;
unsigned int var_10 = 3206385563U;
unsigned long long int var_12 = 13480656025587192403ULL;
unsigned long long int var_14 = 15210058626235308322ULL;
long long int var_15 = -7132357354368616168LL;
int var_18 = -1301274978;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 2556807113U;
int var_21 = 714137971;
unsigned short var_22 = (unsigned short)56306;
void init() {
}

void checksum() {
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
