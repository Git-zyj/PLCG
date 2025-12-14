#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 704745799U;
int var_8 = -571892850;
unsigned char var_9 = (unsigned char)255;
unsigned long long int var_11 = 15435221998873162673ULL;
_Bool var_12 = (_Bool)1;
int var_14 = -294968545;
signed char var_15 = (signed char)26;
int zero = 0;
int var_18 = -1763949974;
int var_19 = 172773056;
unsigned char var_20 = (unsigned char)155;
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
