#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 89532699;
unsigned short var_1 = (unsigned short)56067;
unsigned short var_2 = (unsigned short)50310;
signed char var_3 = (signed char)-54;
unsigned short var_6 = (unsigned short)39004;
signed char var_7 = (signed char)-67;
signed char var_8 = (signed char)-33;
unsigned short var_9 = (unsigned short)36368;
signed char var_10 = (signed char)19;
int var_11 = -1810634262;
int zero = 0;
unsigned int var_12 = 2060067402U;
long long int var_13 = -750890182663977908LL;
void init() {
}

void checksum() {
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
