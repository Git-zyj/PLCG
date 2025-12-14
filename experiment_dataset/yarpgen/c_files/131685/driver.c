#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2705;
long long int var_1 = 6805047823845505102LL;
long long int var_2 = -4094641408191367025LL;
unsigned short var_3 = (unsigned short)42877;
long long int var_4 = -8468931422667195153LL;
unsigned char var_5 = (unsigned char)69;
long long int var_7 = -6807957224960040275LL;
unsigned int var_8 = 1404495952U;
int var_9 = -130492228;
unsigned char var_10 = (unsigned char)92;
int zero = 0;
int var_12 = -1933786176;
unsigned short var_13 = (unsigned short)40225;
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
