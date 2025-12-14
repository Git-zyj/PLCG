#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)222;
unsigned long long int var_3 = 9049736429455900895ULL;
unsigned short var_9 = (unsigned short)13016;
int zero = 0;
unsigned long long int var_18 = 2357925883645492277ULL;
unsigned short var_19 = (unsigned short)50509;
unsigned short var_20 = (unsigned short)15662;
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
