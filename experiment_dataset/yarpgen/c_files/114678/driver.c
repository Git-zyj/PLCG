#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)8;
_Bool var_7 = (_Bool)0;
int var_8 = -1056952515;
int zero = 0;
unsigned short var_12 = (unsigned short)15385;
long long int var_13 = 4337490074082903623LL;
long long int var_14 = -1877662617073235909LL;
unsigned int var_15 = 3907193399U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
