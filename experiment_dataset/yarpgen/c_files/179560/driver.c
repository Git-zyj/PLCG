#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)200;
long long int var_1 = -8936023072453655038LL;
unsigned long long int var_2 = 1844302218411447102ULL;
signed char var_3 = (signed char)-47;
unsigned char var_7 = (unsigned char)110;
short var_8 = (short)12776;
unsigned char var_9 = (unsigned char)169;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -333593829130196824LL;
unsigned long long int var_13 = 2050320199997320107ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
