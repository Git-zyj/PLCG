#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2804835041930407436LL;
signed char var_1 = (signed char)98;
short var_3 = (short)26669;
signed char var_8 = (signed char)-59;
unsigned int var_18 = 2330662185U;
int zero = 0;
unsigned char var_19 = (unsigned char)110;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
