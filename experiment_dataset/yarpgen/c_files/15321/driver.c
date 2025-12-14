#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4477166447502944280LL;
unsigned char var_2 = (unsigned char)145;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-66;
unsigned short var_19 = (unsigned short)31618;
void init() {
}

void checksum() {
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
