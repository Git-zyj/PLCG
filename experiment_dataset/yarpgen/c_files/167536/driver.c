#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 8120281609961185805ULL;
short var_4 = (short)-10860;
short var_8 = (short)-4615;
signed char var_12 = (signed char)104;
int zero = 0;
unsigned long long int var_13 = 1479688838911687140ULL;
short var_14 = (short)-16255;
unsigned char var_15 = (unsigned char)57;
signed char var_16 = (signed char)-108;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
