#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2797270797864144615ULL;
_Bool var_7 = (_Bool)1;
int var_8 = -1096869664;
unsigned int var_12 = 2605038037U;
short var_15 = (short)-6714;
int var_16 = 1358515864;
unsigned long long int var_17 = 13958946065567218390ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)13291;
unsigned long long int var_21 = 5095483416603502422ULL;
int var_22 = -1773692572;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
