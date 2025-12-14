#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)85;
unsigned short var_7 = (unsigned short)44980;
int var_11 = -1451542508;
int zero = 0;
unsigned char var_13 = (unsigned char)42;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 10367515931076574013ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
