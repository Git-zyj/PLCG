#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4504141817739138870LL;
unsigned short var_2 = (unsigned short)8150;
unsigned short var_5 = (unsigned short)4735;
long long int var_6 = 4954557752500964537LL;
unsigned long long int var_9 = 16810047712854882418ULL;
unsigned long long int var_11 = 11646534178113135761ULL;
long long int var_12 = -4155351030924826488LL;
unsigned short var_14 = (unsigned short)1563;
long long int var_16 = 5310235811191776403LL;
long long int var_17 = -7039965209842413925LL;
int zero = 0;
unsigned char var_18 = (unsigned char)231;
unsigned short var_19 = (unsigned short)25270;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
