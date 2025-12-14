#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 855069536;
int var_2 = 198436516;
long long int var_4 = -8863788003455146390LL;
_Bool var_5 = (_Bool)1;
short var_10 = (short)-11952;
int zero = 0;
signed char var_16 = (signed char)-33;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-20292;
short var_19 = (short)-5569;
int var_20 = 1080877517;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
