#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16415983557451191480ULL;
unsigned long long int var_2 = 9627735000620531461ULL;
unsigned long long int var_3 = 11012585547671400631ULL;
long long int var_5 = 6566780210664835408LL;
unsigned int var_7 = 2772267559U;
unsigned long long int var_9 = 17679078874309154876ULL;
int zero = 0;
signed char var_10 = (signed char)-59;
unsigned short var_11 = (unsigned short)37333;
unsigned int var_12 = 1299872431U;
long long int var_13 = -2723849406822256194LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
