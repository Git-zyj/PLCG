#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-89;
unsigned char var_9 = (unsigned char)38;
unsigned long long int var_14 = 2584431970175185076ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)3924;
unsigned long long int var_21 = 14204102818377385988ULL;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
