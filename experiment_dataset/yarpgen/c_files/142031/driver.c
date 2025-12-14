#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)24068;
int var_4 = 987382174;
unsigned char var_5 = (unsigned char)44;
signed char var_6 = (signed char)110;
unsigned char var_7 = (unsigned char)221;
int zero = 0;
long long int var_11 = 6679375053463590806LL;
long long int var_12 = -1115989298254434982LL;
unsigned long long int var_13 = 9467044577381605149ULL;
int var_14 = 2121455636;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
