#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4615660732910881067ULL;
signed char var_6 = (signed char)106;
unsigned short var_7 = (unsigned short)17070;
unsigned long long int var_8 = 1369398223249614408ULL;
short var_11 = (short)29825;
int zero = 0;
unsigned char var_12 = (unsigned char)68;
long long int var_13 = 25251708635938242LL;
unsigned long long int var_14 = 8383619375587509090ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
