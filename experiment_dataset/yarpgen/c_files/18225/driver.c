#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)14975;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-77;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 3134949133553802254ULL;
signed char var_19 = (signed char)-27;
unsigned short var_20 = (unsigned short)28513;
signed char var_21 = (signed char)-125;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
