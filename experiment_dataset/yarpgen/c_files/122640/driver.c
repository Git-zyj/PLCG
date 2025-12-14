#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18668;
short var_2 = (short)-27791;
short var_3 = (short)14621;
short var_4 = (short)-19155;
short var_5 = (short)29812;
short var_6 = (short)-27437;
short var_7 = (short)-11891;
short var_11 = (short)-27573;
int zero = 0;
short var_13 = (short)10703;
short var_14 = (short)25355;
short var_15 = (short)-29664;
short var_16 = (short)26392;
short var_17 = (short)-27401;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
