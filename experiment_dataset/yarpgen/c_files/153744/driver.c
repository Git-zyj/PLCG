#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3353237794136524917ULL;
signed char var_1 = (signed char)-126;
int var_2 = -1291661154;
unsigned int var_3 = 3056745848U;
signed char var_4 = (signed char)-36;
signed char var_5 = (signed char)21;
unsigned char var_6 = (unsigned char)141;
long long int var_7 = 5123201425320062824LL;
signed char var_8 = (signed char)116;
unsigned short var_9 = (unsigned short)50431;
int zero = 0;
signed char var_10 = (signed char)11;
long long int var_11 = -5896813594698493953LL;
unsigned int var_12 = 1575037316U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
