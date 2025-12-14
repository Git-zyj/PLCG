#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7863078113114115714LL;
long long int var_8 = 6037227602866021856LL;
signed char var_10 = (signed char)-58;
signed char var_15 = (signed char)65;
int zero = 0;
unsigned char var_17 = (unsigned char)219;
short var_18 = (short)-4534;
unsigned int var_19 = 2938775111U;
long long int var_20 = -6122080607277391653LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
