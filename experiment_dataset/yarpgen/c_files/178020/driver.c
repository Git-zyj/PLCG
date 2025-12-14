#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1999866321U;
short var_1 = (short)-25672;
short var_4 = (short)-8971;
long long int var_5 = 3086300323640156315LL;
unsigned char var_6 = (unsigned char)140;
long long int var_7 = 6388672819349389982LL;
short var_9 = (short)-21995;
int var_10 = -1506838669;
unsigned char var_11 = (unsigned char)24;
int zero = 0;
unsigned char var_12 = (unsigned char)94;
unsigned int var_13 = 585803180U;
signed char var_14 = (signed char)66;
unsigned long long int var_15 = 8947295330615405208ULL;
unsigned long long int var_16 = 13016192597525576485ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
