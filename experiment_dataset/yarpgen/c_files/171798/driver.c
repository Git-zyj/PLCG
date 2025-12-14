#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6740938274532515682ULL;
signed char var_3 = (signed char)23;
short var_4 = (short)-10183;
unsigned short var_7 = (unsigned short)59639;
long long int var_8 = -5225252793106713277LL;
signed char var_9 = (signed char)-67;
int zero = 0;
short var_13 = (short)1948;
unsigned long long int var_14 = 8900862199808394566ULL;
long long int var_15 = 867343232632180580LL;
unsigned long long int var_16 = 6248921363773836208ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
