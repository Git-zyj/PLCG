#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-10;
unsigned char var_1 = (unsigned char)187;
signed char var_7 = (signed char)-18;
unsigned int var_9 = 73672485U;
signed char var_16 = (signed char)-85;
int zero = 0;
short var_19 = (short)10389;
signed char var_20 = (signed char)68;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
