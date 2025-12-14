#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35039;
unsigned short var_3 = (unsigned short)31420;
unsigned int var_5 = 379328272U;
int var_7 = -857415243;
unsigned long long int var_11 = 9694798668282376580ULL;
unsigned long long int var_14 = 14644856921056213620ULL;
unsigned short var_16 = (unsigned short)64822;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)91;
unsigned int var_21 = 2738649741U;
unsigned short var_22 = (unsigned short)25217;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
