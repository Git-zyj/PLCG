#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 192652590U;
signed char var_9 = (signed char)-47;
signed char var_12 = (signed char)30;
unsigned int var_14 = 1082460117U;
signed char var_18 = (signed char)-2;
int zero = 0;
unsigned char var_19 = (unsigned char)57;
unsigned short var_20 = (unsigned short)5747;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
