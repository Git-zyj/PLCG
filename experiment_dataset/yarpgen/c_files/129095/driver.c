#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_8 = 1311496831U;
int var_13 = -1647509276;
unsigned int var_14 = 3065667918U;
unsigned short var_18 = (unsigned short)15385;
int zero = 0;
signed char var_19 = (signed char)-45;
unsigned char var_20 = (unsigned char)120;
long long int var_21 = -6367157591559359531LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
