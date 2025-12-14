#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9877;
unsigned char var_3 = (unsigned char)116;
unsigned short var_5 = (unsigned short)3001;
unsigned char var_6 = (unsigned char)159;
long long int var_7 = 3604983997823605719LL;
unsigned int var_8 = 4282881328U;
short var_9 = (short)7006;
unsigned int var_11 = 1320521770U;
int zero = 0;
unsigned char var_13 = (unsigned char)161;
long long int var_14 = 3143252776154169349LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
