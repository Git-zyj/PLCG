#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-101;
int var_3 = -409915849;
unsigned int var_4 = 1955764671U;
long long int var_7 = -3430734753180656987LL;
int zero = 0;
unsigned int var_14 = 1650241207U;
unsigned char var_15 = (unsigned char)137;
void init() {
}

void checksum() {
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
