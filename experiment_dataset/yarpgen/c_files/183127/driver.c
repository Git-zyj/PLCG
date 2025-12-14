#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20006;
long long int var_1 = -4369748933948557254LL;
long long int var_6 = 4414610307283754628LL;
int var_8 = 252394526;
unsigned short var_9 = (unsigned short)43007;
short var_11 = (short)22788;
int zero = 0;
signed char var_13 = (signed char)9;
short var_14 = (short)-29584;
int var_15 = 1516992144;
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
