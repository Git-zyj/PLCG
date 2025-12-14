#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14625035135982677913ULL;
unsigned long long int var_2 = 3935909679312314887ULL;
unsigned long long int var_3 = 8423748775436221908ULL;
unsigned short var_5 = (unsigned short)11114;
unsigned char var_9 = (unsigned char)52;
unsigned long long int var_11 = 6061694955450869736ULL;
short var_13 = (short)-20984;
int zero = 0;
long long int var_14 = 3823327181443695381LL;
signed char var_15 = (signed char)-39;
unsigned int var_16 = 970354193U;
short var_17 = (short)-7220;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
