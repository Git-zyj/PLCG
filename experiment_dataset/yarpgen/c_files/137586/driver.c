#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11114;
unsigned short var_3 = (unsigned short)33167;
unsigned short var_4 = (unsigned short)61367;
signed char var_7 = (signed char)-74;
unsigned int var_9 = 534144928U;
unsigned short var_10 = (unsigned short)15835;
signed char var_12 = (signed char)-95;
int zero = 0;
unsigned short var_16 = (unsigned short)61837;
signed char var_17 = (signed char)95;
unsigned char var_18 = (unsigned char)79;
long long int var_19 = 7978639737505310437LL;
short var_20 = (short)9621;
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
