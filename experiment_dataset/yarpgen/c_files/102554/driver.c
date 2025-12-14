#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)67;
unsigned char var_3 = (unsigned char)196;
unsigned long long int var_6 = 10372275619693895405ULL;
unsigned char var_7 = (unsigned char)131;
signed char var_8 = (signed char)-5;
int zero = 0;
signed char var_10 = (signed char)-118;
int var_11 = -1779186446;
unsigned char var_12 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
