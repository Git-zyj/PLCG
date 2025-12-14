#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15676;
unsigned short var_3 = (unsigned short)26666;
int var_4 = -817152622;
unsigned long long int var_7 = 7653434634217240376ULL;
unsigned long long int var_8 = 13555590214907812778ULL;
int zero = 0;
short var_13 = (short)227;
signed char var_14 = (signed char)-108;
void init() {
}

void checksum() {
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
