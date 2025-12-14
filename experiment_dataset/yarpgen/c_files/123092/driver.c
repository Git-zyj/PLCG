#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1144468261U;
unsigned int var_4 = 4213495726U;
unsigned int var_6 = 1396139132U;
long long int var_11 = 5466052148335590105LL;
unsigned char var_12 = (unsigned char)149;
int zero = 0;
unsigned short var_17 = (unsigned short)12277;
signed char var_18 = (signed char)-126;
void init() {
}

void checksum() {
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
