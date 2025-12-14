#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)29650;
long long int var_7 = 1982317632065712762LL;
long long int var_8 = 1802093626753807148LL;
int var_9 = -886823879;
int zero = 0;
long long int var_14 = 3984779050084323342LL;
unsigned short var_15 = (unsigned short)42727;
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
