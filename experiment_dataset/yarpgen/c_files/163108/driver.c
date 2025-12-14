#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-79;
unsigned int var_1 = 3531456767U;
_Bool var_3 = (_Bool)1;
short var_5 = (short)24449;
unsigned int var_6 = 132310173U;
signed char var_8 = (signed char)49;
unsigned short var_9 = (unsigned short)11907;
short var_10 = (short)6736;
unsigned char var_11 = (unsigned char)110;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)26327;
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
