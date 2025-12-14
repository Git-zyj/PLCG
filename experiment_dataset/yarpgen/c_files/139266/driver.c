#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)8005;
long long int var_4 = 2989627310372483821LL;
long long int var_6 = -6565032302433086174LL;
int var_13 = 689522796;
long long int var_14 = 6609408283386725993LL;
int zero = 0;
signed char var_16 = (signed char)76;
signed char var_17 = (signed char)12;
unsigned long long int var_18 = 4641531667769056870ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
