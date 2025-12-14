#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3595132927U;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)192;
signed char var_4 = (signed char)-85;
long long int var_6 = -1062580712354103290LL;
unsigned char var_7 = (unsigned char)79;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)4442;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
