#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)141;
unsigned long long int var_4 = 926691202018885610ULL;
unsigned short var_5 = (unsigned short)3917;
unsigned long long int var_6 = 986567934309777970ULL;
unsigned char var_12 = (unsigned char)166;
long long int var_15 = -6303330531142412126LL;
int zero = 0;
unsigned long long int var_16 = 8975989341685845536ULL;
long long int var_17 = -1787356996756077269LL;
long long int var_18 = 5434623496887062251LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
