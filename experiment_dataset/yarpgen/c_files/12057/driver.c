#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10696;
unsigned long long int var_2 = 2189263777449188122ULL;
signed char var_7 = (signed char)112;
short var_10 = (short)27563;
unsigned long long int var_12 = 2711341834583146076ULL;
int zero = 0;
unsigned long long int var_17 = 18149880860159656763ULL;
short var_18 = (short)12799;
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
