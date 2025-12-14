#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)49;
unsigned int var_2 = 3949865466U;
unsigned char var_3 = (unsigned char)29;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-94;
unsigned long long int var_7 = 4545153175676292036ULL;
unsigned long long int var_9 = 5934612137820784772ULL;
short var_10 = (short)1367;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-10268;
unsigned short var_15 = (unsigned short)19129;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
