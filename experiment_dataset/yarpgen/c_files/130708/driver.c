#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)4;
long long int var_7 = -5486582082844255769LL;
signed char var_8 = (signed char)-82;
signed char var_10 = (signed char)-42;
int zero = 0;
unsigned int var_11 = 3253951458U;
long long int var_12 = -3075531484810292264LL;
unsigned short var_13 = (unsigned short)33278;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
