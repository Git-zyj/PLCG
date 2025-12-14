#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -197900741;
unsigned char var_4 = (unsigned char)117;
unsigned short var_8 = (unsigned short)34398;
int var_10 = -246044215;
int zero = 0;
short var_12 = (short)5937;
signed char var_13 = (signed char)-77;
unsigned short var_14 = (unsigned short)20310;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
