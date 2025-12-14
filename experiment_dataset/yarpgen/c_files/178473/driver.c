#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-64;
int var_3 = -350418220;
signed char var_8 = (signed char)108;
long long int var_14 = 8836430948408816356LL;
long long int var_15 = -5379650311894842665LL;
int zero = 0;
long long int var_18 = 1565008916127630029LL;
unsigned short var_19 = (unsigned short)21634;
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
