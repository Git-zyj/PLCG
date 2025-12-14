#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-37;
signed char var_4 = (signed char)-114;
unsigned short var_8 = (unsigned short)40573;
signed char var_9 = (signed char)-101;
int zero = 0;
int var_11 = -977291361;
short var_12 = (short)-21397;
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
