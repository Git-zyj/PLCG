#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)58;
unsigned long long int var_8 = 3459321434407928050ULL;
unsigned char var_10 = (unsigned char)133;
unsigned long long int var_11 = 7412609988113199508ULL;
int var_13 = -1380904475;
short var_16 = (short)8582;
int zero = 0;
signed char var_19 = (signed char)-58;
signed char var_20 = (signed char)-68;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
