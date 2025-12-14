#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4913453359596024790LL;
unsigned short var_4 = (unsigned short)26273;
signed char var_6 = (signed char)64;
unsigned int var_9 = 2363134925U;
int zero = 0;
long long int var_10 = 3696912798575240028LL;
signed char var_11 = (signed char)6;
unsigned long long int var_12 = 9274185454470247548ULL;
unsigned short var_13 = (unsigned short)24567;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
