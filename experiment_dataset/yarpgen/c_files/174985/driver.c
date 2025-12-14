#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)201;
unsigned long long int var_4 = 1615002591294770029ULL;
unsigned int var_6 = 836407533U;
long long int var_8 = 7893655111961074741LL;
unsigned int var_11 = 2855085587U;
int zero = 0;
unsigned long long int var_20 = 2042879539419300444ULL;
long long int var_21 = -3879484063630895955LL;
unsigned long long int var_22 = 4153670003478853308ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
