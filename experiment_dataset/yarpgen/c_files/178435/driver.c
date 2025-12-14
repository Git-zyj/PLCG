#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4539667671500191730LL;
unsigned long long int var_4 = 14807724187822295496ULL;
long long int var_6 = 5171440463270377646LL;
short var_8 = (short)-28672;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)28015;
long long int var_13 = 6811286113178701816LL;
unsigned char var_14 = (unsigned char)124;
short var_15 = (short)22504;
int var_16 = -974579698;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
