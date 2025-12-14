#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9138987495296200097ULL;
long long int var_1 = 3183007537901908588LL;
unsigned char var_3 = (unsigned char)149;
unsigned int var_4 = 1709453097U;
unsigned int var_5 = 4147981103U;
long long int var_6 = 5435760893112270709LL;
short var_8 = (short)6204;
int var_13 = 781912899;
int zero = 0;
signed char var_15 = (signed char)-20;
long long int var_16 = 1731873289225491011LL;
void init() {
}

void checksum() {
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
