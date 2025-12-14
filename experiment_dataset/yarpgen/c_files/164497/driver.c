#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 982696575U;
unsigned long long int var_8 = 5374046423254268992ULL;
long long int var_10 = -8927593367681683426LL;
signed char var_12 = (signed char)-45;
unsigned int var_13 = 3206574646U;
int zero = 0;
unsigned int var_16 = 3079675141U;
long long int var_17 = -1341141997552955037LL;
unsigned short var_18 = (unsigned short)28279;
unsigned int var_19 = 1785326902U;
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
