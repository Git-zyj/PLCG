#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)101;
unsigned long long int var_2 = 1948907889132885926ULL;
unsigned long long int var_3 = 7937187372220560230ULL;
short var_6 = (short)-9748;
long long int var_9 = 7637348488844015762LL;
unsigned int var_10 = 100967505U;
int zero = 0;
unsigned char var_13 = (unsigned char)57;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)4179;
void init() {
}

void checksum() {
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
