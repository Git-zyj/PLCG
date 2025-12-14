#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)20;
int var_4 = -732632820;
short var_6 = (short)4017;
signed char var_7 = (signed char)17;
int zero = 0;
signed char var_10 = (signed char)-58;
unsigned int var_11 = 3000908634U;
unsigned char var_12 = (unsigned char)167;
int var_13 = -1145616531;
int var_14 = -1598227433;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
