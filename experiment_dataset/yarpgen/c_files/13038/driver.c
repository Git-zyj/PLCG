#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1390263006;
short var_4 = (short)-26861;
long long int var_8 = 3033517647646471050LL;
int zero = 0;
long long int var_12 = 5198630114544973011LL;
unsigned short var_13 = (unsigned short)55164;
unsigned char var_14 = (unsigned char)206;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
