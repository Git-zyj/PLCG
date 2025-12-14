#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7727489823399032586LL;
int var_3 = -2096927118;
unsigned char var_4 = (unsigned char)7;
long long int var_6 = -203487222353951298LL;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_10 = 3111992424134209208LL;
unsigned long long int var_11 = 13527915304008811479ULL;
long long int var_12 = -916069152488614714LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
