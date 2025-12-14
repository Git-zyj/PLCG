#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)75;
short var_2 = (short)627;
long long int var_3 = 75543709289696046LL;
int var_5 = -1766121103;
signed char var_8 = (signed char)10;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)61853;
long long int var_14 = 3030767977187399204LL;
int zero = 0;
long long int var_20 = 7473636279521168794LL;
signed char var_21 = (signed char)-64;
unsigned long long int var_22 = 4547405860685217292ULL;
unsigned short var_23 = (unsigned short)64299;
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
