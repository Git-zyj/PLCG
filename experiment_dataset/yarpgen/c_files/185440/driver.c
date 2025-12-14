#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 586155578;
int var_1 = 791175638;
unsigned long long int var_3 = 16868179040627901288ULL;
signed char var_4 = (signed char)-121;
int var_5 = 2145386970;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 12538225237874601258ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)72;
unsigned short var_11 = (unsigned short)38604;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
