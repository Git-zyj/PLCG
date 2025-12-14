#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-20;
short var_4 = (short)-19832;
signed char var_6 = (signed char)-117;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_13 = -1794586428;
unsigned char var_14 = (unsigned char)104;
void init() {
}

void checksum() {
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
