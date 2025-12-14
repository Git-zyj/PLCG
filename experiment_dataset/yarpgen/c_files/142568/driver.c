#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)32138;
unsigned char var_7 = (unsigned char)121;
long long int var_12 = 4920858018055310531LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-9;
signed char var_18 = (signed char)50;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
