#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2548101723U;
unsigned short var_6 = (unsigned short)54104;
signed char var_7 = (signed char)-106;
signed char var_8 = (signed char)3;
int zero = 0;
signed char var_10 = (signed char)117;
long long int var_11 = 1294551632105592733LL;
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
