#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9949;
_Bool var_2 = (_Bool)0;
int var_4 = -1432011840;
int var_5 = 2128291678;
short var_7 = (short)-7804;
long long int var_8 = -5527482516343740363LL;
unsigned long long int var_9 = 3579387774017246568ULL;
int zero = 0;
unsigned long long int var_12 = 5715695161281592660ULL;
signed char var_13 = (signed char)-70;
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
