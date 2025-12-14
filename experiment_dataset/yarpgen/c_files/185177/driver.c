#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1185191749;
_Bool var_3 = (_Bool)1;
int var_4 = 936116861;
long long int var_5 = 2878666705346267746LL;
signed char var_6 = (signed char)-47;
unsigned long long int var_7 = 14376965747536311504ULL;
int var_8 = 1365284183;
int var_9 = 775491615;
int var_10 = 1654488001;
int var_11 = -1061366015;
int zero = 0;
long long int var_12 = 8727291273628403626LL;
short var_13 = (short)-27147;
long long int var_14 = -2800401046871059614LL;
unsigned int var_15 = 3362106246U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
