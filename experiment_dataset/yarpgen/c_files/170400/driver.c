#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)180;
unsigned int var_4 = 1879688379U;
int var_7 = 1592696487;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 9346689956213391619ULL;
int zero = 0;
short var_15 = (short)15785;
signed char var_16 = (signed char)93;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
