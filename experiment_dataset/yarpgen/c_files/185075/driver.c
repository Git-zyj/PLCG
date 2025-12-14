#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1979655476877295648LL;
unsigned int var_2 = 261519851U;
short var_9 = (short)-7958;
int zero = 0;
unsigned int var_11 = 262023510U;
_Bool var_12 = (_Bool)0;
long long int var_13 = 1809339013859437986LL;
void init() {
}

void checksum() {
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
