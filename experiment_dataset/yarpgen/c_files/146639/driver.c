#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2645908176556439557ULL;
unsigned long long int var_7 = 14656284911389793175ULL;
short var_8 = (short)-25170;
unsigned long long int var_9 = 6125606664561945838ULL;
int zero = 0;
unsigned long long int var_20 = 11193354014275404679ULL;
unsigned char var_21 = (unsigned char)66;
void init() {
}

void checksum() {
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
