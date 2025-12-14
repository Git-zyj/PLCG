#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6152019311155950396LL;
unsigned short var_3 = (unsigned short)37913;
long long int var_4 = -3742107211952440158LL;
unsigned char var_5 = (unsigned char)26;
unsigned short var_6 = (unsigned short)61126;
signed char var_7 = (signed char)25;
unsigned short var_8 = (unsigned short)10521;
signed char var_9 = (signed char)-90;
unsigned short var_10 = (unsigned short)34189;
unsigned char var_11 = (unsigned char)68;
int zero = 0;
unsigned long long int var_13 = 6934687635064746081ULL;
unsigned char var_14 = (unsigned char)225;
void init() {
}

void checksum() {
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
