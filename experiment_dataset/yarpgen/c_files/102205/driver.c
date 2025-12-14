#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-59;
signed char var_2 = (signed char)-98;
_Bool var_14 = (_Bool)1;
short var_15 = (short)20397;
int zero = 0;
unsigned char var_16 = (unsigned char)146;
int var_17 = -2125685772;
unsigned long long int var_18 = 15579040823305619163ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
