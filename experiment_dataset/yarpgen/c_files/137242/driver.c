#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1597163970;
unsigned short var_1 = (unsigned short)57382;
signed char var_4 = (signed char)-49;
unsigned long long int var_12 = 11782726248232495731ULL;
long long int var_13 = 8170687250637028327LL;
int zero = 0;
long long int var_18 = -8145048390494600951LL;
short var_19 = (short)-28500;
int var_20 = 1369378293;
signed char var_21 = (signed char)-108;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
