#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-37;
unsigned char var_8 = (unsigned char)246;
unsigned long long int var_9 = 277345884525071685ULL;
short var_15 = (short)-11961;
unsigned char var_19 = (unsigned char)37;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 5625460576403525574LL;
signed char var_22 = (signed char)-98;
unsigned char var_23 = (unsigned char)122;
unsigned long long int var_24 = 12337534061256385357ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
