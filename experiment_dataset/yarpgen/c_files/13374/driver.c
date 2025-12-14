#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)22;
int var_2 = -772340422;
int var_3 = -1149461306;
unsigned char var_7 = (unsigned char)162;
unsigned int var_9 = 2071670340U;
int zero = 0;
unsigned int var_10 = 3421764212U;
short var_11 = (short)-2572;
signed char var_12 = (signed char)70;
int var_13 = 1092224963;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
