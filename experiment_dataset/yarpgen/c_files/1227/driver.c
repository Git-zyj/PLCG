#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)89;
unsigned char var_3 = (unsigned char)216;
short var_9 = (short)23893;
signed char var_14 = (signed char)39;
unsigned short var_18 = (unsigned short)35306;
int zero = 0;
signed char var_19 = (signed char)85;
unsigned short var_20 = (unsigned short)42087;
unsigned short var_21 = (unsigned short)42192;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
