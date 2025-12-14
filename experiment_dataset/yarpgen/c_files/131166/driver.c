#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 1277575660380910948ULL;
unsigned long long int var_9 = 13745850359598019461ULL;
unsigned char var_10 = (unsigned char)12;
int zero = 0;
unsigned long long int var_12 = 7180058502398967730ULL;
short var_13 = (short)3971;
unsigned long long int var_14 = 5481647090579216619ULL;
unsigned long long int var_15 = 17450744894863178613ULL;
void init() {
}

void checksum() {
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
