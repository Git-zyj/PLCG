#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8315085714693550593LL;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-107;
unsigned char var_5 = (unsigned char)209;
unsigned long long int var_6 = 1651127328410982192ULL;
unsigned char var_7 = (unsigned char)97;
long long int var_8 = -5078790411001997588LL;
unsigned int var_9 = 2766845932U;
unsigned short var_10 = (unsigned short)64088;
int zero = 0;
unsigned short var_11 = (unsigned short)25304;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)10;
signed char var_14 = (signed char)-16;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
