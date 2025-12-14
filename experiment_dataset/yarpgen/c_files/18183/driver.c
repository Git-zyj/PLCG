#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-77;
_Bool var_8 = (_Bool)0;
unsigned int var_16 = 1106330753U;
unsigned char var_18 = (unsigned char)229;
int zero = 0;
short var_20 = (short)-17974;
signed char var_21 = (signed char)-12;
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
