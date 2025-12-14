#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 219451737310249836LL;
short var_3 = (short)19766;
unsigned char var_5 = (unsigned char)101;
long long int var_6 = 9091319523693622946LL;
long long int var_9 = 4127274317845172973LL;
short var_11 = (short)27591;
short var_12 = (short)13915;
int zero = 0;
long long int var_14 = 6121508177220733140LL;
long long int var_15 = 3712213533050828783LL;
void init() {
}

void checksum() {
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
