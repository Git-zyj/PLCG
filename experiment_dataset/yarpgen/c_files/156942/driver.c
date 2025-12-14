#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2769385087309775239LL;
short var_4 = (short)-21552;
signed char var_6 = (signed char)80;
signed char var_7 = (signed char)-69;
short var_8 = (short)22682;
int zero = 0;
int var_11 = -638210663;
short var_12 = (short)-19788;
void init() {
}

void checksum() {
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
