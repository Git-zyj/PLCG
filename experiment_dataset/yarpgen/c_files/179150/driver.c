#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -441169017815749592LL;
signed char var_11 = (signed char)-112;
int zero = 0;
unsigned int var_12 = 1481402854U;
long long int var_13 = 5540102101942062232LL;
unsigned short var_14 = (unsigned short)52109;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
