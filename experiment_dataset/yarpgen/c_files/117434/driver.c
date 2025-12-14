#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)255;
long long int var_4 = 5880677610344764802LL;
long long int var_7 = 7858950600041191643LL;
signed char var_8 = (signed char)-2;
long long int var_11 = 4623084750785461970LL;
int zero = 0;
unsigned long long int var_13 = 13758854529111953294ULL;
unsigned char var_14 = (unsigned char)5;
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
