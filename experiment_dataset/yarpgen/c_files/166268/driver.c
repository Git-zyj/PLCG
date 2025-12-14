#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3400077280U;
unsigned int var_4 = 3590308808U;
unsigned short var_6 = (unsigned short)58369;
signed char var_10 = (signed char)72;
int var_11 = 970254516;
signed char var_12 = (signed char)95;
unsigned long long int var_14 = 1291941603201958669ULL;
int zero = 0;
int var_20 = -123403588;
signed char var_21 = (signed char)-111;
unsigned int var_22 = 1073985057U;
int var_23 = 155121672;
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
