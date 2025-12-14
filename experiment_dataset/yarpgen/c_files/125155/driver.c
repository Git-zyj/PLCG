#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
signed char var_8 = (signed char)104;
signed char var_10 = (signed char)91;
signed char var_12 = (signed char)57;
int zero = 0;
signed char var_15 = (signed char)-121;
int var_16 = -1060205341;
short var_17 = (short)-27213;
int var_18 = 870171231;
unsigned int var_19 = 4213284460U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
