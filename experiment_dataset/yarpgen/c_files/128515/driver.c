#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3810;
int var_4 = 508196188;
short var_6 = (short)8972;
unsigned char var_8 = (unsigned char)149;
signed char var_9 = (signed char)-45;
unsigned long long int var_14 = 17965442159757266226ULL;
short var_15 = (short)17887;
int zero = 0;
long long int var_19 = -5579002878363647071LL;
unsigned long long int var_20 = 16626191783758286356ULL;
unsigned long long int var_21 = 13454947789089191913ULL;
void init() {
}

void checksum() {
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
