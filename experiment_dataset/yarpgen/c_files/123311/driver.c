#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1621946033;
signed char var_5 = (signed char)-33;
signed char var_6 = (signed char)9;
unsigned int var_8 = 2922929300U;
unsigned int var_9 = 1316579757U;
long long int var_12 = 8501147247117222186LL;
long long int var_13 = -5469239987751851806LL;
int zero = 0;
short var_14 = (short)6049;
unsigned char var_15 = (unsigned char)234;
void init() {
}

void checksum() {
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
