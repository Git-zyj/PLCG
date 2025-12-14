#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4168633981513423101LL;
long long int var_1 = -81863085778542681LL;
unsigned char var_2 = (unsigned char)91;
unsigned short var_4 = (unsigned short)8399;
long long int var_5 = 4402345919978744452LL;
int zero = 0;
int var_10 = 434541314;
short var_11 = (short)14758;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
