#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)86;
unsigned char var_3 = (unsigned char)122;
long long int var_4 = 429494526635648388LL;
signed char var_6 = (signed char)-62;
unsigned int var_7 = 3295789233U;
unsigned char var_9 = (unsigned char)175;
signed char var_10 = (signed char)1;
unsigned char var_14 = (unsigned char)204;
unsigned long long int var_16 = 10904406202987474734ULL;
int zero = 0;
unsigned int var_19 = 4123394549U;
unsigned long long int var_20 = 6185181797661584925ULL;
unsigned long long int var_21 = 1232756574055491303ULL;
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
