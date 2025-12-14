#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)117;
int var_3 = -1209079557;
unsigned char var_9 = (unsigned char)64;
unsigned int var_10 = 412699653U;
unsigned long long int var_11 = 13841109514715136024ULL;
short var_12 = (short)-1391;
unsigned int var_13 = 2480885228U;
signed char var_16 = (signed char)125;
short var_17 = (short)-15520;
int zero = 0;
unsigned char var_20 = (unsigned char)53;
short var_21 = (short)-19297;
int var_22 = -915722635;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
