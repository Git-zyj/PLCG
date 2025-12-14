#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19458;
int var_3 = -1735276639;
signed char var_4 = (signed char)26;
_Bool var_7 = (_Bool)0;
short var_10 = (short)23830;
_Bool var_16 = (_Bool)0;
unsigned long long int var_18 = 3014548669856768363ULL;
int zero = 0;
signed char var_20 = (signed char)-38;
short var_21 = (short)3735;
void init() {
}

void checksum() {
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
