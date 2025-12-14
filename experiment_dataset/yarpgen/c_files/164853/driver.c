#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)69;
signed char var_6 = (signed char)59;
signed char var_12 = (signed char)31;
signed char var_14 = (signed char)67;
unsigned short var_15 = (unsigned short)43138;
long long int var_16 = 4161848687024880394LL;
int zero = 0;
unsigned long long int var_20 = 11832634856595065545ULL;
unsigned short var_21 = (unsigned short)47602;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
