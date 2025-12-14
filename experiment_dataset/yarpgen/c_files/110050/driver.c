#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)30;
unsigned short var_6 = (unsigned short)36730;
unsigned short var_7 = (unsigned short)57482;
int zero = 0;
long long int var_18 = 459011450938473169LL;
long long int var_19 = 11429354454986702LL;
unsigned char var_20 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
