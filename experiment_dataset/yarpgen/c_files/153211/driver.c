#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23952;
unsigned long long int var_2 = 8854213951768890887ULL;
unsigned char var_4 = (unsigned char)224;
unsigned long long int var_5 = 10660331670757929025ULL;
unsigned short var_7 = (unsigned short)61119;
int zero = 0;
unsigned long long int var_10 = 5979804332384542789ULL;
long long int var_11 = -2429075524920840563LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
