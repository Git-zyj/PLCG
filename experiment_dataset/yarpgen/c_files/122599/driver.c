#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18778;
int var_1 = -1430348694;
signed char var_4 = (signed char)106;
signed char var_5 = (signed char)3;
signed char var_8 = (signed char)52;
long long int var_10 = 5147042538823283098LL;
signed char var_19 = (signed char)57;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-49;
void init() {
}

void checksum() {
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
