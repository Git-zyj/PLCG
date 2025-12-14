#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)3;
unsigned short var_4 = (unsigned short)23049;
unsigned long long int var_8 = 15795785238478064874ULL;
unsigned long long int var_11 = 17279485407034385827ULL;
int zero = 0;
unsigned long long int var_18 = 344802906716971720ULL;
unsigned short var_19 = (unsigned short)57459;
unsigned short var_20 = (unsigned short)56891;
unsigned long long int var_21 = 8268082741984578921ULL;
unsigned short var_22 = (unsigned short)13491;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
