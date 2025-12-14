#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-100;
unsigned long long int var_4 = 6093079955260361799ULL;
signed char var_5 = (signed char)50;
signed char var_9 = (signed char)118;
unsigned short var_10 = (unsigned short)52170;
signed char var_11 = (signed char)-77;
int zero = 0;
unsigned char var_14 = (unsigned char)201;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
