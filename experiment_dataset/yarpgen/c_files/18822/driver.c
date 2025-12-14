#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)66;
short var_3 = (short)27655;
signed char var_6 = (signed char)-78;
unsigned long long int var_12 = 5355416820498370478ULL;
int zero = 0;
short var_13 = (short)-17551;
short var_14 = (short)-31755;
void init() {
}

void checksum() {
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
