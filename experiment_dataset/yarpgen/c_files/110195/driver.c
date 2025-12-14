#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
signed char var_2 = (signed char)-110;
unsigned long long int var_4 = 5295821129640555399ULL;
unsigned long long int var_5 = 7064588991533854872ULL;
signed char var_11 = (signed char)-37;
unsigned short var_12 = (unsigned short)57270;
unsigned short var_13 = (unsigned short)49563;
int zero = 0;
unsigned short var_15 = (unsigned short)6927;
short var_16 = (short)-12040;
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
