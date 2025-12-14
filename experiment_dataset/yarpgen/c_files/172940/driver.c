#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)30;
signed char var_5 = (signed char)41;
unsigned int var_6 = 428081519U;
unsigned char var_9 = (unsigned char)44;
unsigned int var_12 = 2720544600U;
signed char var_13 = (signed char)61;
unsigned int var_14 = 2298752911U;
int zero = 0;
unsigned char var_18 = (unsigned char)71;
signed char var_19 = (signed char)-96;
short var_20 = (short)-23726;
long long int var_21 = 2337166908920564607LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
