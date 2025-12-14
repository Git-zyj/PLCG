#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20476;
short var_3 = (short)10;
unsigned short var_4 = (unsigned short)31678;
long long int var_8 = 172653555151992329LL;
int var_10 = 1017466082;
int zero = 0;
unsigned long long int var_20 = 13874289324439991177ULL;
signed char var_21 = (signed char)46;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
