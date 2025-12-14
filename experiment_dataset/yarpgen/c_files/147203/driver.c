#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)112;
long long int var_9 = -3378178129078601580LL;
short var_12 = (short)996;
short var_13 = (short)-25584;
unsigned long long int var_16 = 14170681764357677441ULL;
int zero = 0;
unsigned long long int var_20 = 4446232446959626914ULL;
signed char var_21 = (signed char)-14;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)233;
unsigned char var_24 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
