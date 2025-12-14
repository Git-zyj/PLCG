#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 9071923461693087673LL;
unsigned short var_13 = (unsigned short)54966;
short var_19 = (short)10164;
int zero = 0;
int var_20 = 1706346926;
unsigned char var_21 = (unsigned char)207;
unsigned char var_22 = (unsigned char)95;
void init() {
}

void checksum() {
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
