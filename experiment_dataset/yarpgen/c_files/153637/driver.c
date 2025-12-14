#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-102;
unsigned long long int var_6 = 6294956679004909947ULL;
unsigned char var_9 = (unsigned char)235;
int zero = 0;
unsigned long long int var_16 = 2570868993400884499ULL;
unsigned short var_17 = (unsigned short)20426;
unsigned char var_18 = (unsigned char)164;
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
