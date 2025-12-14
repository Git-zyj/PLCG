#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4055283598742946459LL;
unsigned short var_3 = (unsigned short)15172;
long long int var_4 = -5111344619408661630LL;
signed char var_7 = (signed char)84;
unsigned char var_9 = (unsigned char)171;
int var_10 = -1223928066;
signed char var_16 = (signed char)30;
int zero = 0;
int var_18 = -983568147;
long long int var_19 = 9173039058947111471LL;
signed char var_20 = (signed char)97;
signed char var_21 = (signed char)-37;
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
