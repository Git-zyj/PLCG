#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)73;
unsigned char var_4 = (unsigned char)146;
unsigned short var_5 = (unsigned short)12980;
long long int var_7 = -5991251152579894976LL;
short var_11 = (short)1322;
unsigned char var_12 = (unsigned char)9;
unsigned long long int var_13 = 17972452151562191011ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)32;
short var_17 = (short)5003;
unsigned char var_18 = (unsigned char)222;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
