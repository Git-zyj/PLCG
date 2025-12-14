#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)14;
unsigned long long int var_4 = 12459030543933233104ULL;
signed char var_5 = (signed char)106;
signed char var_10 = (signed char)53;
short var_12 = (short)8200;
int zero = 0;
long long int var_13 = 3983831385550120594LL;
unsigned int var_14 = 3316279710U;
int var_15 = -1295050398;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
