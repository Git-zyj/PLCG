#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5300558458041514576ULL;
signed char var_2 = (signed char)-29;
int var_4 = 285341397;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)30388;
unsigned short var_10 = (unsigned short)52021;
int zero = 0;
unsigned char var_11 = (unsigned char)171;
long long int var_12 = 5033718719134358213LL;
int var_13 = 1526330720;
void init() {
}

void checksum() {
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
