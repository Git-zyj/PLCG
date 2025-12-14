#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -122562854;
short var_5 = (short)17148;
long long int var_12 = 4021493082705946922LL;
signed char var_13 = (signed char)-121;
unsigned long long int var_15 = 9581582731500486614ULL;
int zero = 0;
long long int var_20 = 3498940048182368313LL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1863461537U;
int var_23 = -736909643;
long long int var_24 = 8233524886545918574LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
