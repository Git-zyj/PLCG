#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-121;
unsigned long long int var_3 = 10668504476416479471ULL;
unsigned char var_7 = (unsigned char)137;
signed char var_8 = (signed char)-28;
unsigned char var_11 = (unsigned char)138;
unsigned long long int var_13 = 295122744313347956ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)34308;
short var_16 = (short)-11351;
void init() {
}

void checksum() {
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
