#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)11581;
unsigned long long int var_6 = 12043765272738049990ULL;
signed char var_9 = (signed char)-127;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)112;
long long int var_16 = 7162238292031334689LL;
unsigned char var_17 = (unsigned char)16;
long long int var_18 = -8360293092502780648LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
