#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 1276408632767564829ULL;
unsigned long long int var_8 = 9820753986759979185ULL;
unsigned short var_12 = (unsigned short)8698;
unsigned long long int var_16 = 10272058787719954111ULL;
int zero = 0;
signed char var_17 = (signed char)-97;
signed char var_18 = (signed char)26;
unsigned int var_19 = 3449223221U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
