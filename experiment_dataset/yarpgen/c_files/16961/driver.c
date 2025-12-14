#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 885247343528880548ULL;
long long int var_3 = -1977457718309786729LL;
unsigned int var_4 = 2988322234U;
signed char var_5 = (signed char)-57;
unsigned int var_10 = 1921448103U;
short var_12 = (short)-2139;
int zero = 0;
unsigned long long int var_13 = 16260018012615338419ULL;
signed char var_14 = (signed char)-126;
signed char var_15 = (signed char)-43;
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
