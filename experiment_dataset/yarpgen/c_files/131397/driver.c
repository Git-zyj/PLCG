#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)59;
unsigned int var_1 = 576743937U;
int var_4 = -388542172;
int var_5 = 1432864835;
unsigned int var_8 = 3063161507U;
int zero = 0;
unsigned short var_11 = (unsigned short)15162;
long long int var_12 = -3494857911336170464LL;
void init() {
}

void checksum() {
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
