#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-58;
unsigned short var_1 = (unsigned short)54304;
int var_3 = -782207998;
signed char var_4 = (signed char)4;
signed char var_6 = (signed char)-43;
unsigned char var_7 = (unsigned char)136;
int zero = 0;
unsigned short var_11 = (unsigned short)61975;
_Bool var_12 = (_Bool)0;
int var_13 = -439069683;
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
