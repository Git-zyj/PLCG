#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10966;
unsigned int var_3 = 3253299306U;
unsigned long long int var_4 = 1142373573651671493ULL;
long long int var_6 = 8614465986857558665LL;
short var_7 = (short)21249;
unsigned long long int var_8 = 17002852281461007030ULL;
unsigned int var_9 = 2516061725U;
unsigned long long int var_10 = 8429393589244231717ULL;
unsigned int var_11 = 356551996U;
int zero = 0;
signed char var_13 = (signed char)-57;
int var_14 = 1573750265;
signed char var_15 = (signed char)-62;
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
