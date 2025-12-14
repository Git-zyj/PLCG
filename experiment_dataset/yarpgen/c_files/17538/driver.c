#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
int var_2 = 292666014;
signed char var_3 = (signed char)-45;
signed char var_4 = (signed char)-2;
int var_6 = -836857919;
int var_10 = 181429149;
int zero = 0;
signed char var_15 = (signed char)-42;
signed char var_16 = (signed char)-124;
int var_17 = 298879981;
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
