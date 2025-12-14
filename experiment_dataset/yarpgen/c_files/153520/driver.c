#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1424627889;
unsigned short var_6 = (unsigned short)58414;
signed char var_7 = (signed char)-21;
unsigned int var_8 = 3288994464U;
unsigned char var_11 = (unsigned char)149;
int var_13 = 1924586484;
signed char var_14 = (signed char)-1;
long long int var_18 = 3973159090395999639LL;
short var_19 = (short)-29501;
int zero = 0;
int var_20 = 1286432690;
unsigned short var_21 = (unsigned short)44854;
long long int var_22 = -527768566476030440LL;
int var_23 = -960534560;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
