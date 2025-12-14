#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2755202374U;
short var_7 = (short)-15789;
int zero = 0;
unsigned int var_13 = 1655859256U;
unsigned int var_14 = 1427855544U;
long long int var_15 = -5870952511272218638LL;
int var_16 = -1072832689;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
