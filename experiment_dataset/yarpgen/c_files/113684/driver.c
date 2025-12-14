#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2045716149820390638LL;
signed char var_4 = (signed char)115;
signed char var_7 = (signed char)-103;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_15 = 3739650357665262247LL;
unsigned long long int var_16 = 10828182364096484434ULL;
void init() {
}

void checksum() {
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
