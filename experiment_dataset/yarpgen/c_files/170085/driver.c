#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)191;
_Bool var_7 = (_Bool)1;
unsigned char var_11 = (unsigned char)197;
unsigned short var_12 = (unsigned short)50459;
unsigned long long int var_15 = 568955257316094231ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 10608611521521150023ULL;
unsigned char var_20 = (unsigned char)94;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
