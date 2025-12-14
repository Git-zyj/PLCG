#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-77;
int var_3 = -1374459369;
unsigned int var_4 = 1367060658U;
short var_5 = (short)27262;
long long int var_8 = -4816349312173584021LL;
unsigned long long int var_10 = 6272827705181171965ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)34;
unsigned char var_13 = (unsigned char)52;
unsigned long long int var_14 = 9380438594433594293ULL;
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
