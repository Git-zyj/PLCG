#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)98;
unsigned long long int var_19 = 3094551782393541354ULL;
int zero = 0;
unsigned long long int var_20 = 15827686757966529182ULL;
unsigned long long int var_21 = 2710333912300219153ULL;
signed char var_22 = (signed char)-28;
void init() {
}

void checksum() {
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
