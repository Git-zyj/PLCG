#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5026342807101207505LL;
signed char var_4 = (signed char)-76;
unsigned long long int var_6 = 10308823784436225424ULL;
unsigned char var_7 = (unsigned char)219;
short var_8 = (short)30025;
int zero = 0;
signed char var_13 = (signed char)-8;
unsigned char var_14 = (unsigned char)12;
short var_15 = (short)26211;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
