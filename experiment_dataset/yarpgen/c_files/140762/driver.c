#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-25;
signed char var_4 = (signed char)23;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)20319;
unsigned long long int var_9 = 13124989683828099524ULL;
unsigned int var_10 = 2059402185U;
int var_12 = -1280698385;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 8156504817010683691ULL;
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
