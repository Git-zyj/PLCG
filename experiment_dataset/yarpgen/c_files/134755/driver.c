#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3332712911790765476LL;
short var_6 = (short)21604;
int var_9 = -1002481134;
unsigned char var_13 = (unsigned char)57;
int zero = 0;
signed char var_16 = (signed char)90;
unsigned long long int var_17 = 756493090656806380ULL;
unsigned short var_18 = (unsigned short)56712;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
