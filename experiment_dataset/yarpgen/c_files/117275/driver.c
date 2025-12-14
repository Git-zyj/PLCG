#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6513515420694815941LL;
unsigned short var_1 = (unsigned short)50432;
signed char var_2 = (signed char)-24;
long long int var_3 = 6215543388532015372LL;
unsigned short var_6 = (unsigned short)53613;
signed char var_8 = (signed char)90;
int zero = 0;
signed char var_12 = (signed char)-1;
signed char var_13 = (signed char)29;
signed char var_14 = (signed char)-120;
long long int var_15 = -9176535943219790183LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
