#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15207231088673458074ULL;
unsigned long long int var_3 = 16303942887214835175ULL;
unsigned int var_4 = 934601178U;
short var_6 = (short)6312;
short var_8 = (short)-25081;
short var_9 = (short)-29777;
short var_10 = (short)-26182;
int zero = 0;
short var_11 = (short)15783;
long long int var_12 = 7882580000736661153LL;
signed char var_13 = (signed char)-127;
unsigned int var_14 = 233988443U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
