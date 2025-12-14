#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20103;
unsigned int var_5 = 1403731475U;
long long int var_6 = -6913537834434455915LL;
signed char var_12 = (signed char)-65;
signed char var_14 = (signed char)22;
signed char var_15 = (signed char)78;
int var_16 = -1571797353;
int zero = 0;
int var_18 = 467654801;
unsigned short var_19 = (unsigned short)15618;
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
