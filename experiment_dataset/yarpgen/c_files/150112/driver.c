#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
short var_2 = (short)26106;
signed char var_5 = (signed char)-116;
unsigned char var_8 = (unsigned char)25;
signed char var_9 = (signed char)-13;
unsigned char var_10 = (unsigned char)158;
int zero = 0;
long long int var_13 = -1700686420326673078LL;
unsigned char var_14 = (unsigned char)5;
unsigned char var_15 = (unsigned char)247;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
