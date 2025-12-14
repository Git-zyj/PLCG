#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 413665400;
unsigned long long int var_5 = 17598823902408459570ULL;
unsigned short var_8 = (unsigned short)7993;
_Bool var_13 = (_Bool)0;
short var_14 = (short)6517;
int zero = 0;
int var_20 = 942946003;
unsigned long long int var_21 = 10693870610479539398ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
