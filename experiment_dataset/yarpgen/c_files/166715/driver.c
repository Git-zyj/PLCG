#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_4 = (signed char)-117;
long long int var_6 = 5011283091748919893LL;
unsigned short var_10 = (unsigned short)29662;
long long int var_15 = -8248673509230266804LL;
int zero = 0;
short var_17 = (short)-2855;
long long int var_18 = 9196069947783671809LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
