#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15761594809950477001ULL;
unsigned char var_3 = (unsigned char)150;
unsigned char var_5 = (unsigned char)186;
unsigned char var_7 = (unsigned char)219;
unsigned short var_8 = (unsigned short)27782;
short var_10 = (short)-25348;
long long int var_11 = 4829615163579038916LL;
long long int var_12 = 1373404962057546025LL;
unsigned int var_13 = 1842705323U;
long long int var_15 = 1855342611422638928LL;
int var_16 = -448598371;
int zero = 0;
signed char var_20 = (signed char)-109;
signed char var_21 = (signed char)15;
unsigned char var_22 = (unsigned char)226;
unsigned short var_23 = (unsigned short)57645;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
