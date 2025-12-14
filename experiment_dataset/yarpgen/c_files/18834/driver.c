#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-112;
unsigned char var_5 = (unsigned char)145;
unsigned char var_10 = (unsigned char)28;
int zero = 0;
unsigned char var_15 = (unsigned char)94;
unsigned short var_16 = (unsigned short)63491;
unsigned long long int var_17 = 561236085371666166ULL;
unsigned short var_18 = (unsigned short)61973;
signed char var_19 = (signed char)-68;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
