#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10444756101693486637ULL;
short var_3 = (short)-8897;
long long int var_6 = -53590206563152479LL;
long long int var_9 = 394271809060241199LL;
unsigned int var_11 = 1987420345U;
int zero = 0;
signed char var_14 = (signed char)27;
signed char var_15 = (signed char)105;
void init() {
}

void checksum() {
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
