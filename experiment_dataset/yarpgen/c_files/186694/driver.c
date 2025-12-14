#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)26;
unsigned short var_6 = (unsigned short)55670;
unsigned long long int var_8 = 17748341997410209183ULL;
signed char var_9 = (signed char)-49;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3424469464U;
unsigned int var_21 = 3787856792U;
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
