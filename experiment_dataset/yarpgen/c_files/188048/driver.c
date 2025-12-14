#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)182;
signed char var_3 = (signed char)35;
unsigned char var_4 = (unsigned char)207;
int var_6 = -739251410;
_Bool var_9 = (_Bool)1;
long long int var_10 = 1921393680421139539LL;
int zero = 0;
unsigned char var_11 = (unsigned char)153;
int var_12 = -145267089;
signed char var_13 = (signed char)126;
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
