#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17771;
unsigned short var_2 = (unsigned short)60865;
int var_4 = -835789236;
unsigned int var_7 = 2970947076U;
unsigned short var_8 = (unsigned short)25155;
int zero = 0;
signed char var_10 = (signed char)59;
unsigned long long int var_11 = 15120242929306867622ULL;
unsigned int var_12 = 3900123779U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
