#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1166395821U;
signed char var_2 = (signed char)64;
unsigned char var_5 = (unsigned char)85;
signed char var_7 = (signed char)85;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)180;
unsigned short var_16 = (unsigned short)27351;
int zero = 0;
signed char var_17 = (signed char)-79;
unsigned short var_18 = (unsigned short)39563;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
