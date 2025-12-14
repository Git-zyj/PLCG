#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-39;
short var_2 = (short)14647;
unsigned long long int var_5 = 17006417945516270065ULL;
unsigned short var_6 = (unsigned short)44447;
unsigned long long int var_11 = 15023793400052810400ULL;
int zero = 0;
unsigned int var_14 = 3230453625U;
short var_15 = (short)9736;
void init() {
}

void checksum() {
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
