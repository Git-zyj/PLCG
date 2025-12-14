#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2005636993161961074LL;
unsigned char var_2 = (unsigned char)56;
int var_3 = -24652810;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-13;
signed char var_8 = (signed char)87;
int var_9 = -1075371827;
short var_10 = (short)-25677;
int zero = 0;
short var_15 = (short)-8650;
int var_16 = 736976707;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
