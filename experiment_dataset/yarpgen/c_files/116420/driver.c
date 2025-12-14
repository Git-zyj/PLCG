#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29988;
short var_1 = (short)26251;
short var_3 = (short)-15074;
short var_5 = (short)-1920;
short var_7 = (short)11662;
short var_9 = (short)-32767;
int zero = 0;
short var_11 = (short)31307;
short var_12 = (short)2418;
short var_13 = (short)-5414;
short var_14 = (short)18093;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
