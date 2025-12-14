#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)53;
long long int var_7 = -803822539647537586LL;
unsigned char var_11 = (unsigned char)195;
_Bool var_13 = (_Bool)1;
int var_18 = -1193095490;
int zero = 0;
unsigned char var_20 = (unsigned char)79;
long long int var_21 = -4804579762296349776LL;
short var_22 = (short)13404;
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
