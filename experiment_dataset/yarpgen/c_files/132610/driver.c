#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)31189;
short var_8 = (short)11288;
short var_9 = (short)-11017;
short var_15 = (short)-19302;
int zero = 0;
unsigned long long int var_20 = 3087326183130030080ULL;
unsigned long long int var_21 = 13043920973623703188ULL;
signed char var_22 = (signed char)-115;
signed char var_23 = (signed char)-17;
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
