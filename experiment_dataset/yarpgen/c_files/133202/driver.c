#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
long long int var_1 = 8190195898161462632LL;
signed char var_2 = (signed char)-8;
unsigned long long int var_6 = 8021589811627728897ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 8745724235696694608LL;
long long int var_13 = 5570443270476137429LL;
unsigned short var_14 = (unsigned short)11013;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
