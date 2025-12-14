#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-80;
signed char var_4 = (signed char)13;
signed char var_5 = (signed char)-125;
unsigned char var_6 = (unsigned char)63;
int var_9 = -1757583907;
unsigned char var_12 = (unsigned char)102;
long long int var_15 = -8898696664846107115LL;
unsigned long long int var_18 = 7399908267436365580ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)162;
unsigned int var_21 = 988787240U;
unsigned long long int var_22 = 17890395254487377138ULL;
unsigned long long int var_23 = 8773808050464752865ULL;
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
