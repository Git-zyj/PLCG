#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-28436;
unsigned short var_6 = (unsigned short)10905;
unsigned char var_9 = (unsigned char)226;
unsigned long long int var_10 = 5708866019045480499ULL;
unsigned short var_11 = (unsigned short)25451;
signed char var_12 = (signed char)8;
long long int var_19 = 8866610963706633253LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)160;
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
