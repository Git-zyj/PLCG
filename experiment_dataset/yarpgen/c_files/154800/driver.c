#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -213754389541589126LL;
unsigned int var_4 = 709400473U;
unsigned int var_7 = 3578597065U;
unsigned int var_9 = 2838797546U;
int zero = 0;
unsigned short var_10 = (unsigned short)26038;
unsigned int var_11 = 3188457792U;
signed char var_12 = (signed char)-74;
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
