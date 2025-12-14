#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15277739625379733698ULL;
unsigned long long int var_2 = 13324553230277754386ULL;
long long int var_3 = 5669370091365296833LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 13933011688359264693ULL;
int zero = 0;
unsigned int var_11 = 174499557U;
signed char var_12 = (signed char)-69;
unsigned long long int var_13 = 3842483638293102998ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
