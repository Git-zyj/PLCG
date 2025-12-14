#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7388791163807677053ULL;
signed char var_2 = (signed char)-91;
unsigned long long int var_7 = 13103654245438297681ULL;
long long int var_8 = 9120395647858280704LL;
unsigned int var_9 = 4172452781U;
unsigned char var_12 = (unsigned char)75;
signed char var_13 = (signed char)30;
long long int var_15 = -5720205644630576363LL;
int zero = 0;
long long int var_16 = -2794743139040933051LL;
int var_17 = -1537242667;
long long int var_18 = -5856546476746498958LL;
short var_19 = (short)-32197;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
