#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1781589225;
int var_7 = 898233254;
short var_9 = (short)28737;
short var_18 = (short)-11162;
int zero = 0;
short var_20 = (short)-9770;
unsigned short var_21 = (unsigned short)55172;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
