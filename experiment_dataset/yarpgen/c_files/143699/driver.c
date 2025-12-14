#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 606166709U;
signed char var_6 = (signed char)-26;
unsigned long long int var_7 = 14913298050782092843ULL;
long long int var_9 = -4552405805141789066LL;
unsigned short var_10 = (unsigned short)29817;
int zero = 0;
unsigned long long int var_12 = 2896654465976796212ULL;
_Bool var_13 = (_Bool)0;
int var_14 = 135931800;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
