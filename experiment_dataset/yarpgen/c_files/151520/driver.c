#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)106;
signed char var_6 = (signed char)-82;
int var_9 = -1017173187;
int zero = 0;
long long int var_11 = -8756392407268956426LL;
unsigned char var_12 = (unsigned char)104;
short var_13 = (short)23768;
void init() {
}

void checksum() {
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
