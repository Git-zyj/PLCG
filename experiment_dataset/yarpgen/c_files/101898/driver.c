#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-43;
int var_8 = 1820938497;
signed char var_10 = (signed char)-44;
signed char var_16 = (signed char)-23;
int zero = 0;
short var_19 = (short)15217;
unsigned short var_20 = (unsigned short)14771;
long long int var_21 = -3557661418232950860LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
