#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)65;
unsigned int var_2 = 411348050U;
unsigned short var_7 = (unsigned short)3920;
unsigned short var_8 = (unsigned short)19082;
signed char var_9 = (signed char)18;
int zero = 0;
signed char var_11 = (signed char)107;
unsigned int var_12 = 4254735716U;
void init() {
}

void checksum() {
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
