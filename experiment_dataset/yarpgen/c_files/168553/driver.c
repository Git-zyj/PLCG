#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15610242691252376643ULL;
short var_2 = (short)-11709;
int var_5 = 1958778320;
signed char var_6 = (signed char)57;
short var_10 = (short)-13785;
unsigned long long int var_12 = 2040540725401121609ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)159;
unsigned short var_18 = (unsigned short)24125;
unsigned short var_19 = (unsigned short)23280;
unsigned short var_20 = (unsigned short)61978;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
