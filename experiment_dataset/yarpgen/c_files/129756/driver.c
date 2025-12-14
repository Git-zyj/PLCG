#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3154568863411489399LL;
short var_1 = (short)-32728;
signed char var_6 = (signed char)125;
_Bool var_7 = (_Bool)1;
unsigned long long int var_12 = 1002428534330459635ULL;
int zero = 0;
long long int var_13 = 213127914707305354LL;
unsigned int var_14 = 1142301448U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
