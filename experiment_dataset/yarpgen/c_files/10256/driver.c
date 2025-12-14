#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)216;
unsigned short var_2 = (unsigned short)55241;
unsigned long long int var_4 = 3379158725647422076ULL;
int var_13 = 821227605;
long long int var_16 = -3738912863973361224LL;
unsigned char var_19 = (unsigned char)182;
int zero = 0;
short var_20 = (short)24157;
signed char var_21 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
