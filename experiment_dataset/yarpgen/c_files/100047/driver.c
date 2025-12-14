#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-60;
long long int var_6 = 8184024285476207582LL;
unsigned char var_9 = (unsigned char)87;
short var_15 = (short)31532;
int zero = 0;
unsigned char var_16 = (unsigned char)7;
unsigned char var_17 = (unsigned char)80;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
