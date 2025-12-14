#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)46;
short var_5 = (short)-1247;
short var_6 = (short)15963;
int var_8 = -513440964;
short var_11 = (short)-19801;
signed char var_16 = (signed char)104;
int zero = 0;
unsigned int var_18 = 2097173316U;
int var_19 = -391393505;
void init() {
}

void checksum() {
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
