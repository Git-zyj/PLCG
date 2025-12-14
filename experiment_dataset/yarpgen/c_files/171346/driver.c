#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2685043889U;
signed char var_5 = (signed char)-66;
long long int var_9 = -8358548417411051504LL;
unsigned short var_10 = (unsigned short)24004;
signed char var_11 = (signed char)-58;
int zero = 0;
unsigned short var_14 = (unsigned short)17343;
long long int var_15 = 4475878134430924030LL;
signed char var_16 = (signed char)-50;
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
