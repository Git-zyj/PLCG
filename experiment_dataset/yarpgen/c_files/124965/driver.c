#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)19202;
unsigned char var_5 = (unsigned char)172;
signed char var_8 = (signed char)-59;
unsigned char var_9 = (unsigned char)100;
unsigned char var_12 = (unsigned char)226;
unsigned short var_13 = (unsigned short)25470;
long long int var_16 = -3846816779456725648LL;
unsigned long long int var_18 = 17941104705657661788ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)154;
unsigned short var_20 = (unsigned short)59664;
unsigned short var_21 = (unsigned short)38038;
void init() {
}

void checksum() {
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
