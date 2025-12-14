#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
short var_2 = (short)12205;
long long int var_9 = -4668141630387248541LL;
int var_11 = -1167887040;
signed char var_13 = (signed char)-60;
int zero = 0;
unsigned char var_15 = (unsigned char)78;
unsigned short var_16 = (unsigned short)65366;
short var_17 = (short)-136;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
