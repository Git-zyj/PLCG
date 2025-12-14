#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -729993239;
signed char var_9 = (signed char)10;
unsigned char var_10 = (unsigned char)61;
unsigned char var_11 = (unsigned char)222;
unsigned char var_12 = (unsigned char)240;
unsigned long long int var_13 = 16480650846533617869ULL;
short var_18 = (short)-5929;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)74;
signed char var_22 = (signed char)-42;
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
