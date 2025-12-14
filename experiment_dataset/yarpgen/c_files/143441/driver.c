#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61180;
int var_1 = 530232304;
unsigned int var_2 = 242722176U;
short var_3 = (short)-1425;
unsigned char var_4 = (unsigned char)217;
signed char var_5 = (signed char)105;
unsigned char var_6 = (unsigned char)26;
signed char var_7 = (signed char)-35;
signed char var_8 = (signed char)27;
long long int var_9 = -2801802294110474813LL;
unsigned char var_10 = (unsigned char)109;
int zero = 0;
unsigned char var_11 = (unsigned char)179;
long long int var_12 = -4415012333906961910LL;
unsigned char var_13 = (unsigned char)241;
void init() {
}

void checksum() {
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
