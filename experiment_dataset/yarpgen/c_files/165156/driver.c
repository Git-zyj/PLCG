#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16695092330921400117ULL;
int var_6 = 1143670112;
unsigned int var_7 = 3267573700U;
signed char var_13 = (signed char)-25;
unsigned char var_15 = (unsigned char)191;
int zero = 0;
long long int var_16 = 8195783454804567086LL;
unsigned short var_17 = (unsigned short)20348;
signed char var_18 = (signed char)58;
unsigned long long int var_19 = 5546607200478005062ULL;
unsigned short var_20 = (unsigned short)27579;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
