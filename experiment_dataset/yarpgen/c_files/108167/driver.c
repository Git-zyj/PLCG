#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-17;
unsigned char var_5 = (unsigned char)61;
unsigned char var_8 = (unsigned char)174;
long long int var_11 = -31830947922672319LL;
int zero = 0;
signed char var_14 = (signed char)102;
short var_15 = (short)9291;
unsigned short var_16 = (unsigned short)32505;
short var_17 = (short)-25204;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
