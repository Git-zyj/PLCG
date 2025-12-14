#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
int var_2 = -377186990;
unsigned int var_3 = 319815519U;
int var_8 = -1247929250;
int var_11 = 164146776;
int zero = 0;
unsigned short var_13 = (unsigned short)61043;
signed char var_14 = (signed char)-27;
signed char var_15 = (signed char)-25;
int var_16 = -110744938;
long long int var_17 = -5912357073772491620LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
