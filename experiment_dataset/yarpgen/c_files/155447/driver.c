#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = -1997827238;
unsigned int var_4 = 2573467672U;
short var_5 = (short)10588;
unsigned short var_7 = (unsigned short)48944;
unsigned long long int var_9 = 8208680190589823780ULL;
int zero = 0;
signed char var_10 = (signed char)-57;
unsigned int var_11 = 2710871187U;
_Bool var_12 = (_Bool)1;
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
