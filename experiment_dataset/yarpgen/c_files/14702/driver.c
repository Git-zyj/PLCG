#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -918035905060617364LL;
unsigned long long int var_2 = 7533082876188327110ULL;
unsigned long long int var_3 = 14537809963052709842ULL;
unsigned short var_4 = (unsigned short)57435;
short var_5 = (short)8861;
unsigned char var_7 = (unsigned char)251;
int var_10 = 1727432796;
unsigned long long int var_11 = 12377977632063311722ULL;
int zero = 0;
signed char var_13 = (signed char)15;
unsigned char var_14 = (unsigned char)176;
unsigned int var_15 = 2247842232U;
unsigned char var_16 = (unsigned char)171;
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
