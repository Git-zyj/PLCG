#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17355126329699476869ULL;
short var_5 = (short)-12886;
short var_6 = (short)-5550;
unsigned int var_8 = 2576401498U;
signed char var_12 = (signed char)71;
unsigned char var_15 = (unsigned char)17;
unsigned long long int var_16 = 17508320649500034544ULL;
unsigned int var_17 = 3183598142U;
int zero = 0;
unsigned int var_20 = 4191709212U;
_Bool var_21 = (_Bool)0;
short var_22 = (short)28411;
unsigned long long int var_23 = 9771991496928679353ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
