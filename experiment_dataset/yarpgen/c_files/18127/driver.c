#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-45;
_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 16638743743676783607ULL;
int zero = 0;
short var_10 = (short)-17469;
unsigned short var_11 = (unsigned short)11158;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
