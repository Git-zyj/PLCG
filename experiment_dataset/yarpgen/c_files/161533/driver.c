#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)46;
signed char var_7 = (signed char)8;
unsigned long long int var_16 = 10705296227972704834ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)49019;
short var_20 = (short)23839;
long long int var_21 = 3128950885709538085LL;
signed char var_22 = (signed char)-29;
void init() {
}

void checksum() {
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
