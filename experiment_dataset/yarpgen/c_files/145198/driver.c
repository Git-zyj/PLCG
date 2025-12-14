#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1983800339005764233LL;
unsigned long long int var_5 = 18064467446882251892ULL;
unsigned short var_6 = (unsigned short)52440;
unsigned int var_7 = 56805860U;
signed char var_11 = (signed char)72;
signed char var_13 = (signed char)-46;
int zero = 0;
unsigned long long int var_20 = 12339419163577166086ULL;
unsigned long long int var_21 = 11052440452798971407ULL;
long long int var_22 = -2703587229587315192LL;
unsigned short var_23 = (unsigned short)41134;
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
