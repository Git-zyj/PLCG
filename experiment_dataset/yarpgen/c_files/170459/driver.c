#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-63;
unsigned long long int var_3 = 1962891341552573223ULL;
unsigned short var_4 = (unsigned short)49377;
signed char var_5 = (signed char)52;
long long int var_6 = -872989016451799480LL;
short var_7 = (short)-8729;
signed char var_8 = (signed char)110;
signed char var_11 = (signed char)5;
int zero = 0;
unsigned short var_12 = (unsigned short)52016;
signed char var_13 = (signed char)-27;
unsigned int var_14 = 3163457884U;
long long int var_15 = 2847984934979190675LL;
signed char var_16 = (signed char)56;
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
