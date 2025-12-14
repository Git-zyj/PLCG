#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
unsigned int var_8 = 3406400665U;
int var_9 = -249066265;
unsigned int var_12 = 3846912U;
short var_15 = (short)19829;
int zero = 0;
unsigned int var_19 = 2998485906U;
unsigned char var_20 = (unsigned char)246;
short var_21 = (short)6433;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
