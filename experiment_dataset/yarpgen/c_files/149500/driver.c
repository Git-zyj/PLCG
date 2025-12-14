#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4677;
signed char var_7 = (signed char)-55;
unsigned char var_10 = (unsigned char)22;
short var_12 = (short)3856;
signed char var_13 = (signed char)-84;
int var_14 = -1700305898;
int zero = 0;
unsigned long long int var_17 = 17150775334855839161ULL;
unsigned long long int var_18 = 15619556726036005055ULL;
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
