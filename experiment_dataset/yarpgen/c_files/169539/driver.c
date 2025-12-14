#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-110;
signed char var_5 = (signed char)-112;
unsigned short var_11 = (unsigned short)16654;
unsigned long long int var_14 = 1778095684171004709ULL;
int zero = 0;
int var_18 = -453452901;
signed char var_19 = (signed char)-108;
long long int var_20 = -2850647646520262789LL;
signed char var_21 = (signed char)97;
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
