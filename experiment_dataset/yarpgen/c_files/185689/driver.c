#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16755135276489846169ULL;
unsigned short var_8 = (unsigned short)38535;
unsigned int var_9 = 219676289U;
unsigned short var_11 = (unsigned short)35139;
int zero = 0;
signed char var_13 = (signed char)27;
unsigned long long int var_14 = 1247891318614621071ULL;
void init() {
}

void checksum() {
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
