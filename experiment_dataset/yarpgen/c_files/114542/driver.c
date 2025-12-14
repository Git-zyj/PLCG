#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64490;
signed char var_3 = (signed char)-51;
signed char var_4 = (signed char)112;
long long int var_5 = 6468879550641831044LL;
unsigned short var_8 = (unsigned short)48886;
unsigned short var_9 = (unsigned short)57949;
signed char var_10 = (signed char)-37;
int zero = 0;
unsigned short var_11 = (unsigned short)35093;
unsigned int var_12 = 3518475029U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
