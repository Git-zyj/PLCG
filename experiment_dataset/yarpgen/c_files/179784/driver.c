#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27654;
short var_2 = (short)22173;
short var_4 = (short)-29388;
short var_5 = (short)-31734;
short var_8 = (short)117;
short var_9 = (short)6940;
short var_10 = (short)15238;
int zero = 0;
short var_13 = (short)-21352;
short var_14 = (short)5922;
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
