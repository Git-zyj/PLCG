#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1424321609U;
long long int var_5 = -996490825563253423LL;
long long int var_9 = -434936821516230998LL;
short var_10 = (short)-28294;
int zero = 0;
unsigned int var_15 = 4051468669U;
signed char var_16 = (signed char)27;
int var_17 = 1669968938;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
