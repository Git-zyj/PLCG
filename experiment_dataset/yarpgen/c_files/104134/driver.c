#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)66;
signed char var_4 = (signed char)-123;
unsigned short var_9 = (unsigned short)6202;
signed char var_10 = (signed char)113;
unsigned short var_11 = (unsigned short)31665;
int zero = 0;
unsigned short var_16 = (unsigned short)50734;
unsigned short var_17 = (unsigned short)38651;
signed char var_18 = (signed char)-48;
signed char var_19 = (signed char)(-127 - 1);
signed char var_20 = (signed char)-39;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
