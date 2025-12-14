#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8140639417037481141LL;
unsigned short var_1 = (unsigned short)62413;
unsigned int var_4 = 1549074223U;
long long int var_9 = -2316086687687765388LL;
unsigned char var_10 = (unsigned char)98;
short var_13 = (short)1456;
int zero = 0;
unsigned int var_20 = 870793624U;
signed char var_21 = (signed char)-54;
long long int var_22 = -6124826854344721214LL;
unsigned long long int var_23 = 3780683145368535037ULL;
unsigned int var_24 = 2068608885U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
