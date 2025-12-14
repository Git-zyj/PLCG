#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)1;
signed char var_1 = (signed char)-72;
unsigned short var_8 = (unsigned short)55193;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_14 = -6796725750046398719LL;
unsigned char var_15 = (unsigned char)245;
void init() {
}

void checksum() {
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
