#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)82;
unsigned char var_6 = (unsigned char)146;
long long int var_7 = -3705343499401713495LL;
signed char var_10 = (signed char)-45;
unsigned long long int var_13 = 12071430026861590256ULL;
int zero = 0;
int var_20 = -354554925;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
