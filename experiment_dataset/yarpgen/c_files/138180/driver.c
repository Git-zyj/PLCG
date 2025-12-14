#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 352067586060341923ULL;
unsigned short var_2 = (unsigned short)52816;
unsigned long long int var_5 = 14477434670181724336ULL;
unsigned int var_6 = 3832810768U;
unsigned int var_7 = 3516831023U;
int zero = 0;
unsigned short var_13 = (unsigned short)58228;
unsigned short var_14 = (unsigned short)13078;
void init() {
}

void checksum() {
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
