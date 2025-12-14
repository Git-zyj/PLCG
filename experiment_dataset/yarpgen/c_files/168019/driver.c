#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)98;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)40401;
unsigned char var_9 = (unsigned char)108;
unsigned char var_14 = (unsigned char)177;
int zero = 0;
signed char var_18 = (signed char)-69;
signed char var_19 = (signed char)-45;
unsigned char var_20 = (unsigned char)34;
int var_21 = -2042339025;
void init() {
}

void checksum() {
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
