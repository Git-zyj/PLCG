#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60742;
unsigned char var_1 = (unsigned char)15;
signed char var_2 = (signed char)-37;
unsigned int var_3 = 3644140263U;
signed char var_4 = (signed char)0;
unsigned int var_5 = 460772080U;
unsigned char var_8 = (unsigned char)207;
int var_9 = -1809068732;
signed char var_10 = (signed char)40;
unsigned short var_11 = (unsigned short)25202;
int zero = 0;
unsigned long long int var_12 = 1787229677026983790ULL;
int var_13 = 1508943170;
unsigned char var_14 = (unsigned char)80;
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
