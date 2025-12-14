#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)216;
unsigned char var_3 = (unsigned char)136;
_Bool var_4 = (_Bool)0;
unsigned long long int var_10 = 9112481097730887828ULL;
signed char var_13 = (signed char)-43;
int zero = 0;
unsigned long long int var_18 = 9087900939139137073ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
