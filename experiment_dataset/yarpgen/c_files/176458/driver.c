#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7830001172872993587ULL;
int var_1 = -885885727;
unsigned long long int var_2 = 16405332129848846869ULL;
unsigned long long int var_3 = 9407875229546671016ULL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-22245;
unsigned long long int var_6 = 1074222196831736788ULL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-67;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3839004249U;
int var_12 = 252166320;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
