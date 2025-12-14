#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)90;
signed char var_6 = (signed char)-46;
unsigned char var_10 = (unsigned char)217;
long long int var_12 = 2985305216429610182LL;
long long int var_17 = 5058973178081460687LL;
unsigned char var_18 = (unsigned char)121;
int zero = 0;
unsigned long long int var_20 = 18364447512699461714ULL;
unsigned long long int var_21 = 13004727951346569391ULL;
signed char var_22 = (signed char)-112;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
