#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)30860;
unsigned long long int var_3 = 10592332194887163543ULL;
unsigned char var_11 = (unsigned char)159;
short var_14 = (short)-608;
int zero = 0;
short var_15 = (short)15216;
short var_16 = (short)7742;
long long int var_17 = -3587969032135067924LL;
void init() {
}

void checksum() {
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
