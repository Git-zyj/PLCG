#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1327740975190298925ULL;
unsigned short var_4 = (unsigned short)7626;
unsigned long long int var_5 = 3425637294563124030ULL;
unsigned char var_7 = (unsigned char)95;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_12 = 4104108187276729539LL;
unsigned char var_13 = (unsigned char)254;
unsigned long long int var_14 = 4139926170831471561ULL;
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
