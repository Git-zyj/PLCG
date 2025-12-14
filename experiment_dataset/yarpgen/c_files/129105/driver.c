#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 732883705586001971ULL;
short var_8 = (short)-27933;
unsigned long long int var_12 = 16075572981741464047ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)53642;
signed char var_19 = (signed char)-104;
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
