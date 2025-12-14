#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)5854;
long long int var_2 = -6778658917329352021LL;
unsigned short var_5 = (unsigned short)24008;
short var_6 = (short)26624;
unsigned int var_7 = 671840611U;
long long int var_8 = -5638172195397336622LL;
short var_9 = (short)-19852;
int zero = 0;
unsigned short var_10 = (unsigned short)34405;
long long int var_11 = 6067499876053796831LL;
int var_12 = -2039645705;
long long int var_13 = -8368372291610939586LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
