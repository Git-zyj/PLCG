#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8139124797223420173LL;
unsigned char var_1 = (unsigned char)85;
signed char var_4 = (signed char)-34;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)67;
int zero = 0;
unsigned long long int var_12 = 3848226827736297080ULL;
long long int var_13 = 7973145782088319483LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
