#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
unsigned long long int var_2 = 987666958095863242ULL;
unsigned int var_3 = 4183617626U;
unsigned char var_9 = (unsigned char)171;
unsigned int var_10 = 1596550640U;
signed char var_11 = (signed char)-18;
int zero = 0;
long long int var_19 = 4559445410878591130LL;
signed char var_20 = (signed char)3;
unsigned int var_21 = 3074949799U;
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
