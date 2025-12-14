#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12110762429774610640ULL;
signed char var_3 = (signed char)6;
long long int var_4 = 6062100888058114005LL;
int var_5 = -1135773228;
unsigned short var_8 = (unsigned short)4707;
int zero = 0;
signed char var_10 = (signed char)-73;
long long int var_11 = 1775089913454082230LL;
long long int var_12 = -1336098593312104393LL;
signed char var_13 = (signed char)-64;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
