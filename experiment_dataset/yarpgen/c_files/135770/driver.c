#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16099418396979018281ULL;
unsigned long long int var_2 = 15413666420710068487ULL;
long long int var_3 = -1598467262655452762LL;
unsigned char var_5 = (unsigned char)20;
unsigned char var_6 = (unsigned char)149;
unsigned char var_9 = (unsigned char)34;
unsigned int var_12 = 3393887192U;
unsigned int var_13 = 3101577923U;
int zero = 0;
unsigned int var_14 = 2945108142U;
signed char var_15 = (signed char)-98;
unsigned int var_16 = 3386750871U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
