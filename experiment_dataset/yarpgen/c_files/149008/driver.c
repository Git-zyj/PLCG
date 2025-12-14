#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1900636494754940289LL;
unsigned char var_7 = (unsigned char)10;
unsigned short var_9 = (unsigned short)47184;
int var_10 = -1461781278;
int zero = 0;
unsigned long long int var_17 = 6689196547598575806ULL;
unsigned char var_18 = (unsigned char)159;
unsigned long long int var_19 = 14040735159702835209ULL;
signed char var_20 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
