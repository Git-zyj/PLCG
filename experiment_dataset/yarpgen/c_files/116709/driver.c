#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-105;
unsigned int var_4 = 1413911321U;
int var_12 = -1849020451;
unsigned int var_13 = 1962873492U;
signed char var_14 = (signed char)-41;
int zero = 0;
unsigned short var_19 = (unsigned short)13015;
unsigned char var_20 = (unsigned char)27;
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
