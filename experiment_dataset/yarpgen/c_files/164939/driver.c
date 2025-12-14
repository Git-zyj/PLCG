#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)38;
unsigned short var_4 = (unsigned short)18405;
signed char var_8 = (signed char)-18;
signed char var_9 = (signed char)121;
int var_10 = 1899397218;
unsigned short var_11 = (unsigned short)53602;
short var_15 = (short)-28575;
int zero = 0;
unsigned short var_16 = (unsigned short)21183;
short var_17 = (short)4781;
unsigned long long int var_18 = 4583634244547174261ULL;
short var_19 = (short)-6768;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
