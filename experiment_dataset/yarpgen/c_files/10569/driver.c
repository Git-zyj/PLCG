#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)103;
signed char var_2 = (signed char)10;
_Bool var_3 = (_Bool)1;
long long int var_4 = 4680533856696920999LL;
short var_5 = (short)-24834;
short var_7 = (short)13974;
short var_9 = (short)-3551;
int zero = 0;
int var_10 = -1551527314;
int var_11 = -511463664;
unsigned int var_12 = 612168876U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
