#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 260446587;
short var_6 = (short)-11969;
_Bool var_8 = (_Bool)0;
short var_10 = (short)680;
unsigned int var_11 = 3990021006U;
int var_14 = -1706165899;
unsigned int var_15 = 3863405889U;
int zero = 0;
int var_18 = -1152058671;
long long int var_19 = -4399267794861918010LL;
int var_20 = 599264112;
signed char var_21 = (signed char)31;
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
