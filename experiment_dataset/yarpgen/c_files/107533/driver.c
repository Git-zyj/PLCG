#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1553274559354374049ULL;
unsigned long long int var_4 = 12923369925266433908ULL;
long long int var_16 = -9013485429790364373LL;
int zero = 0;
unsigned char var_19 = (unsigned char)78;
unsigned int var_20 = 2945348587U;
_Bool var_21 = (_Bool)1;
long long int var_22 = -7485992004898272103LL;
long long int var_23 = 455676620163598403LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
