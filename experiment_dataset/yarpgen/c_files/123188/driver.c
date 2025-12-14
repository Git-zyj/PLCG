#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2613151634105069633LL;
int var_2 = -1159058632;
signed char var_3 = (signed char)-11;
unsigned char var_11 = (unsigned char)211;
int zero = 0;
unsigned short var_19 = (unsigned short)41458;
unsigned long long int var_20 = 11706346643779993936ULL;
long long int var_21 = 1984579771354271471LL;
unsigned short var_22 = (unsigned short)21356;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
