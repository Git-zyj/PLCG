#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)68;
signed char var_11 = (signed char)-30;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-79;
unsigned short var_14 = (unsigned short)59482;
unsigned short var_15 = (unsigned short)57442;
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
