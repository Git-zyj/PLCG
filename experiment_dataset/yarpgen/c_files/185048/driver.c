#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6853345620753338930ULL;
unsigned int var_4 = 2112367037U;
unsigned long long int var_6 = 17224121888326240475ULL;
short var_10 = (short)-27864;
int zero = 0;
unsigned char var_13 = (unsigned char)59;
unsigned long long int var_14 = 7669537645139576733ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
