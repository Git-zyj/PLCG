#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 305956016U;
unsigned int var_3 = 1504283998U;
long long int var_4 = -5913656743632816157LL;
int var_7 = 1657202142;
signed char var_10 = (signed char)-117;
int zero = 0;
short var_12 = (short)77;
signed char var_13 = (signed char)106;
unsigned short var_14 = (unsigned short)62079;
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
