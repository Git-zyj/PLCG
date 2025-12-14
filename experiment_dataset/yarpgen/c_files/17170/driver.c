#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)51;
unsigned long long int var_1 = 8826124755974987426ULL;
signed char var_7 = (signed char)-120;
unsigned long long int var_8 = 4990804665411423932ULL;
unsigned long long int var_12 = 10944817421132502815ULL;
unsigned long long int var_14 = 10602841960442755756ULL;
int zero = 0;
unsigned long long int var_16 = 3512405796373405656ULL;
signed char var_17 = (signed char)84;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
