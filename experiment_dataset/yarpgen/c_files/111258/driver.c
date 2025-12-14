#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10040272906542076986ULL;
long long int var_1 = -2914802062567810768LL;
unsigned short var_3 = (unsigned short)59398;
unsigned short var_4 = (unsigned short)33272;
signed char var_7 = (signed char)86;
unsigned short var_8 = (unsigned short)52710;
unsigned long long int var_9 = 9707401944811789342ULL;
long long int var_11 = 3503482135083377664LL;
int zero = 0;
signed char var_13 = (signed char)-49;
signed char var_14 = (signed char)-60;
unsigned short var_15 = (unsigned short)64609;
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
