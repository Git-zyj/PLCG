#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)20807;
long long int var_8 = 5319784499201661500LL;
unsigned int var_11 = 4049074498U;
int zero = 0;
int var_13 = -260969756;
signed char var_14 = (signed char)-13;
long long int var_15 = -1324824058170058862LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
