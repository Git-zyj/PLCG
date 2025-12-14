#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4118845552547274870LL;
long long int var_1 = 5345617520208672853LL;
long long int var_4 = -1712347125586415182LL;
long long int var_8 = 9123275436610834833LL;
signed char var_14 = (signed char)69;
int zero = 0;
long long int var_15 = 3894840077872492588LL;
unsigned char var_16 = (unsigned char)220;
unsigned long long int var_17 = 9349192620855171053ULL;
unsigned long long int var_18 = 7393938980892865688ULL;
unsigned char var_19 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
