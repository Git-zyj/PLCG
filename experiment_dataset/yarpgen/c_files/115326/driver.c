#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29034;
short var_3 = (short)-10757;
unsigned int var_5 = 2042316520U;
long long int var_13 = 5998112408152273320LL;
int zero = 0;
int var_14 = 386481781;
unsigned char var_15 = (unsigned char)74;
signed char var_16 = (signed char)-102;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
