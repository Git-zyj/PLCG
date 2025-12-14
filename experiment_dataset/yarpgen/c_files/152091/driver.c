#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13293;
signed char var_3 = (signed char)-117;
short var_7 = (short)-8067;
short var_13 = (short)-15529;
int zero = 0;
signed char var_18 = (signed char)39;
long long int var_19 = 7846596191906299795LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
