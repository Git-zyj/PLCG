#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)61074;
unsigned char var_9 = (unsigned char)27;
long long int var_11 = -1515714188110288359LL;
int zero = 0;
unsigned int var_19 = 2860334178U;
short var_20 = (short)22125;
_Bool var_21 = (_Bool)1;
short var_22 = (short)31401;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
