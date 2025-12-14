#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)20087;
unsigned short var_9 = (unsigned short)19671;
_Bool var_12 = (_Bool)0;
unsigned char var_16 = (unsigned char)157;
int var_17 = -967583769;
unsigned long long int var_18 = 1014904858421187043ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)101;
signed char var_20 = (signed char)-58;
unsigned char var_21 = (unsigned char)179;
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
