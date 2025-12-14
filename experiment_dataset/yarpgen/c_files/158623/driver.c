#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1851554663686319396LL;
int var_3 = -11823732;
unsigned int var_4 = 926660454U;
long long int var_5 = -1262550923728979547LL;
unsigned long long int var_10 = 5120002015541916204ULL;
int zero = 0;
unsigned int var_11 = 3630384647U;
int var_12 = 61108905;
signed char var_13 = (signed char)42;
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
