#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)91;
short var_3 = (short)-27493;
unsigned short var_6 = (unsigned short)28339;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 17274993945964257705ULL;
unsigned long long int var_12 = 6759116350924877469ULL;
int zero = 0;
short var_17 = (short)11992;
unsigned long long int var_18 = 1618235560708577841ULL;
int var_19 = 1897757841;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
