#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)41967;
unsigned short var_4 = (unsigned short)50847;
short var_6 = (short)9822;
short var_12 = (short)11454;
unsigned short var_13 = (unsigned short)3419;
int zero = 0;
short var_18 = (short)4451;
unsigned int var_19 = 3332055591U;
unsigned long long int var_20 = 12239241384810929209ULL;
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
