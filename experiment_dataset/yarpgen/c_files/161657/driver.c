#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1328340907;
unsigned int var_1 = 4106835590U;
signed char var_3 = (signed char)82;
long long int var_5 = 8214305232494816790LL;
short var_7 = (short)-27031;
unsigned short var_8 = (unsigned short)24929;
int zero = 0;
int var_10 = -1610103006;
short var_11 = (short)-18375;
long long int var_12 = -2059950003445277295LL;
unsigned short var_13 = (unsigned short)51201;
signed char var_14 = (signed char)101;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
