#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11806150564127751617ULL;
unsigned int var_3 = 32987082U;
signed char var_4 = (signed char)-117;
long long int var_5 = 7303280735748677922LL;
unsigned short var_7 = (unsigned short)52215;
int zero = 0;
unsigned int var_10 = 2089443947U;
unsigned long long int var_11 = 12925014841893735234ULL;
unsigned char var_12 = (unsigned char)147;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
