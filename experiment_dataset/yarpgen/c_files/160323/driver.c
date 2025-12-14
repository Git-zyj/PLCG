#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)27;
signed char var_1 = (signed char)-27;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)42766;
long long int var_4 = -7587542582354923193LL;
int var_5 = 130462554;
int var_7 = -1912816448;
unsigned short var_9 = (unsigned short)50237;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-83;
int var_12 = 2123976547;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
