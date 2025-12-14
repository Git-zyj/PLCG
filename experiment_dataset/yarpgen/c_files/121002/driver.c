#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)43;
unsigned char var_2 = (unsigned char)163;
unsigned char var_3 = (unsigned char)121;
unsigned int var_4 = 1368870057U;
unsigned char var_9 = (unsigned char)251;
signed char var_11 = (signed char)-26;
signed char var_13 = (signed char)10;
int zero = 0;
unsigned char var_14 = (unsigned char)14;
signed char var_15 = (signed char)-114;
unsigned int var_16 = 459846782U;
void init() {
}

void checksum() {
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
