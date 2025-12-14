#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4061108102421775211LL;
signed char var_3 = (signed char)18;
signed char var_6 = (signed char)-86;
int var_8 = -171080625;
signed char var_10 = (signed char)-62;
signed char var_12 = (signed char)9;
short var_13 = (short)-1234;
unsigned int var_14 = 808529273U;
int zero = 0;
short var_15 = (short)-8792;
unsigned char var_16 = (unsigned char)225;
unsigned int var_17 = 2472624990U;
unsigned long long int var_18 = 12288202529345788017ULL;
short var_19 = (short)-32447;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
