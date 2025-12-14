#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
unsigned long long int var_2 = 3830682639512087799ULL;
int var_6 = -2068855777;
signed char var_7 = (signed char)-117;
int zero = 0;
short var_13 = (short)-26162;
unsigned char var_14 = (unsigned char)207;
short var_15 = (short)-16052;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
