#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4471183426858083707LL;
signed char var_1 = (signed char)-71;
short var_2 = (short)-27690;
unsigned short var_9 = (unsigned short)33165;
short var_14 = (short)-25439;
short var_15 = (short)27028;
int zero = 0;
signed char var_16 = (signed char)-120;
short var_17 = (short)7858;
short var_18 = (short)15209;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
