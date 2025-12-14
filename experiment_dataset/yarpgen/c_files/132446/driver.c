#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1306822521088536797ULL;
unsigned short var_1 = (unsigned short)43412;
signed char var_5 = (signed char)-78;
unsigned long long int var_8 = 8082208725173714016ULL;
short var_9 = (short)20595;
int zero = 0;
int var_11 = 63950524;
signed char var_12 = (signed char)55;
unsigned int var_13 = 237474877U;
unsigned char var_14 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
