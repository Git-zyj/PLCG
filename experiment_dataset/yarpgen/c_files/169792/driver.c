#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-86;
unsigned int var_4 = 3125841846U;
int zero = 0;
unsigned char var_19 = (unsigned char)194;
unsigned long long int var_20 = 1075670018733020013ULL;
long long int var_21 = 1842276549926550901LL;
signed char var_22 = (signed char)-76;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
