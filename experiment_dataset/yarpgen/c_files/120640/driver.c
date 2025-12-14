#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)98;
unsigned long long int var_7 = 4532733885220281065ULL;
signed char var_10 = (signed char)-98;
int zero = 0;
unsigned long long int var_16 = 3930214036581179282ULL;
unsigned long long int var_17 = 327265506296773376ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
