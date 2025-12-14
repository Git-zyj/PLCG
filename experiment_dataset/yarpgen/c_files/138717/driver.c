#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)208;
int var_1 = 670518799;
unsigned int var_2 = 250918779U;
signed char var_3 = (signed char)-46;
long long int var_7 = 8478225141822961945LL;
long long int var_9 = 7018566190343023348LL;
unsigned char var_10 = (unsigned char)160;
int var_11 = 432588345;
unsigned long long int var_17 = 9376350314419474765ULL;
int zero = 0;
signed char var_18 = (signed char)77;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 4604944195302006983ULL;
void init() {
}

void checksum() {
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
