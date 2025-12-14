#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12093980558609555334ULL;
long long int var_2 = -7676895652010362366LL;
int var_3 = 458863339;
unsigned char var_6 = (unsigned char)126;
unsigned long long int var_9 = 4616002475435111327ULL;
short var_10 = (short)21246;
int zero = 0;
unsigned short var_12 = (unsigned short)10157;
signed char var_13 = (signed char)-58;
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
