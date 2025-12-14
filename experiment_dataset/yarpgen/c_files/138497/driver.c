#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 146658092677466281LL;
short var_4 = (short)-11474;
signed char var_5 = (signed char)90;
signed char var_7 = (signed char)-15;
unsigned long long int var_11 = 15557849621165328574ULL;
int zero = 0;
unsigned long long int var_12 = 1764939862438954344ULL;
short var_13 = (short)-16714;
void init() {
}

void checksum() {
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
