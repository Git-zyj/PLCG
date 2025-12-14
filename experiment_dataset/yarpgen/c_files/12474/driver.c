#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
short var_1 = (short)-31998;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
long long int var_8 = -294269298094997595LL;
long long int var_9 = -8169015897868106249LL;
int zero = 0;
int var_10 = -1078371192;
unsigned short var_11 = (unsigned short)40375;
int var_12 = 1581779690;
signed char var_13 = (signed char)37;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
