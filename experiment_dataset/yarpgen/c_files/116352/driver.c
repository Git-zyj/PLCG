#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27476;
unsigned short var_6 = (unsigned short)9628;
short var_10 = (short)-25108;
short var_11 = (short)32059;
short var_14 = (short)-28754;
int zero = 0;
unsigned char var_16 = (unsigned char)27;
unsigned char var_17 = (unsigned char)117;
short var_18 = (short)14127;
unsigned char var_19 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
