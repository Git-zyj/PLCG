#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28583;
unsigned char var_4 = (unsigned char)119;
unsigned long long int var_11 = 14349859300053652044ULL;
unsigned short var_13 = (unsigned short)632;
unsigned long long int var_16 = 10754605296896119424ULL;
int zero = 0;
unsigned long long int var_17 = 14252787362163184440ULL;
long long int var_18 = -4918932910681873871LL;
unsigned char var_19 = (unsigned char)94;
int var_20 = 1342332480;
long long int var_21 = 625461511220598544LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
