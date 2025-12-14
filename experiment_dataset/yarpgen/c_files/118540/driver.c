#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 566427237;
signed char var_1 = (signed char)-54;
unsigned int var_2 = 3411718547U;
signed char var_4 = (signed char)-23;
unsigned int var_6 = 1336945497U;
int zero = 0;
signed char var_12 = (signed char)-118;
long long int var_13 = 1994626985827897716LL;
unsigned char var_14 = (unsigned char)230;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
