#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2707493290U;
long long int var_3 = 7247294608539134621LL;
long long int var_4 = -8045626098472120347LL;
unsigned char var_7 = (unsigned char)228;
int var_9 = 1166982033;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_13 = 1848302719346273331LL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)6108;
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
