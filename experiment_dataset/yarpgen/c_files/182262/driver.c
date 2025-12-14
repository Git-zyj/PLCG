#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 657138787;
short var_6 = (short)19637;
unsigned char var_12 = (unsigned char)89;
int zero = 0;
long long int var_14 = 906307124571353034LL;
signed char var_15 = (signed char)-7;
void init() {
}

void checksum() {
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
