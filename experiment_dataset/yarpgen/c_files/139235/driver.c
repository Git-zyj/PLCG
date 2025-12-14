#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10434100038189510489ULL;
signed char var_9 = (signed char)45;
unsigned char var_14 = (unsigned char)189;
short var_15 = (short)-3621;
short var_16 = (short)17856;
int zero = 0;
signed char var_17 = (signed char)36;
signed char var_18 = (signed char)74;
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
