#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)148;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)34;
unsigned short var_11 = (unsigned short)26936;
int zero = 0;
int var_13 = -279965141;
int var_14 = -979197751;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
