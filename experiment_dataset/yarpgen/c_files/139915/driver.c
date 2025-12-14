#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24722;
short var_2 = (short)26447;
signed char var_3 = (signed char)92;
unsigned char var_10 = (unsigned char)127;
long long int var_11 = -4678937996378096582LL;
int zero = 0;
signed char var_12 = (signed char)-71;
unsigned char var_13 = (unsigned char)74;
signed char var_14 = (signed char)-120;
void init() {
}

void checksum() {
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
