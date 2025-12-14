#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4293;
_Bool var_3 = (_Bool)0;
short var_5 = (short)28508;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -2762444929178549412LL;
unsigned char var_12 = (unsigned char)115;
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
