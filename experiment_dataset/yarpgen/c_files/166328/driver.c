#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 466359813U;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 2454179367U;
unsigned char var_5 = (unsigned char)56;
unsigned short var_6 = (unsigned short)24616;
unsigned int var_7 = 1574425824U;
long long int var_13 = 3429831593541089596LL;
signed char var_14 = (signed char)59;
signed char var_15 = (signed char)-74;
int zero = 0;
short var_18 = (short)32373;
unsigned char var_19 = (unsigned char)246;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
