#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 7674431645978622825LL;
unsigned char var_9 = (unsigned char)169;
signed char var_17 = (signed char)-70;
int zero = 0;
long long int var_19 = -5790157607918790989LL;
_Bool var_20 = (_Bool)0;
long long int var_21 = -6828470665542585279LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
