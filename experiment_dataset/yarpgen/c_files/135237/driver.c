#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9409;
long long int var_2 = -3282436081625870570LL;
signed char var_4 = (signed char)113;
unsigned int var_5 = 2648113162U;
int var_8 = -1275387;
signed char var_10 = (signed char)57;
unsigned short var_11 = (unsigned short)27403;
int zero = 0;
long long int var_18 = 5385711081349563998LL;
long long int var_19 = 3478618253213179703LL;
unsigned char var_20 = (unsigned char)157;
long long int var_21 = -5166881011720117970LL;
unsigned long long int var_22 = 12610659541354579719ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
